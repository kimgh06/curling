#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<conio.h>
#include<time.h>
char board[50][60] = {
	" --------------------------------------------------------- ",
	"|                                                         |",
	"|                                                         |",
	"|              -----------------------------              |",
	"|             |                             |             |",
	"|             |    ---------------------    |             |",
	"|             |   |                     |   |             |",
	"|             |   |    -------------    |   |             |",
	"|             |   |   |             |   |   |             |",
	"|             |   |   |    -----    |   |   |             |",
	"|             |   |   |   |     |   |   |   |             |",
	"|             |   |   |   |     |   |   |   |             |",
	"|             |   |   |    -----    |   |   |             |",
	"|             |   |   |             |   |   |             |",
	"|             |   |    -------------    |   |             |",
	"|             |   |                     |   |             |",
	"|             |    ---------------------    |             |",
	"|             |                             |             |",
	"|              -----------------------------              |",
	"|                                                         |",
	"|---------------------------------------------------------|",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                                                    ---  |",
	"|                                                   | 1 | |",
	"|                                                   | 2 | |",
	"|                                                   | 3 | |",
	"|                                                   | 4 | |",
	"|                                                   | 5 | |",
	"|                                                   | 4 | |",
	"|                                                   | 3 | |",
	"|                                                   | 2 | |",
	"|                                                   | 1 | |",
	"|                                                    ---  |",
	"|---------------------------------------------------------|",
	"|   p1 :    |                                     |남은 공|",
	"|           |                                     |       |",
	"|   p2 :    |                                     |       |",
	" ---------------------------------------------------------"
};
char title[50][60];
char ball[3] = { "|@|" };
int on = 0, locat = 4, up = 0, dtc = 0, speed = 0, player = 0, used = 0, gn, click = 0, twink = 250, what = 0;
int b1 = 5, b2 = 5, p1 = 0, p2 = 0;
double st;
void point() {
	if (used == 0) {
		if (player == 0) { //1의 점수 계산
			b1--;
			switch (46 - speed) {
			case 1:
			case 2:
			case 20:
			case 21:
				p1++;
				break;
			case 3:
			case 4:
			case 17:
			case 18:
				p1 += 2;
				break;
			case 5:
			case 6:
			case 15:
			case 16:
				p1 += 3;
				break;
			case 7:
			case 8:
			case 13:
			case 14:
				p1 += 4;
				break;
			case 9:
			case 10:
			case 11:
			case 12:
				p1 += 5;
				break;
			}
			player = 1;
		}
		else if (player == 1) { //2의 점수 계산
			b2--;
			switch (46 - speed) {
			case 1:
			case 2:
			case 20:
			case 21:
				p2++;
				break;
			case 3:
			case 4:
			case 17:
			case 18:
				p2 += 2;
				break;
			case 5:
			case 6:
			case 15:
			case 16:
				p2 += 3;
				break;
			case 7:
			case 8:
			case 13:
			case 14:
				p2 += 4;
				break;
			case 9:
			case 10:
			case 11:
			case 12:
				p2 += 5;
				break;
			}
			player = 0;
		}
		used = 1; //점수 계산 했음을 표시
	}
}
void push() {
	if (_kbhit()) {
		char a = _getch();
		if (a == ' ') {//입력
			if (on == 1) {//갈 거리 증가
				click = 1;
				dtc += click * (gn / ((double)clock() / CLOCKS_PER_SEC) - st);
			}
			else if (on == 0) {//속도 초기화
				if (locat > 5)
					dtc += 3 * (10 - locat);
				else
					dtc += locat * 3;
				gn = dtc;
				on = 1;
			}
		}
	}
	click = 0;
}
void sweep() {
	if (dtc == 0) { //모두 초기화
		on = 2;
		printf("정지 됨");
	}
	else {
		if (dtc > 1) {
			switch (dtc / 2) {
			case 1:
			case 2:
				dtc -= 2;
				speed += 2;
				break;
			case 3:
			case 4:
				dtc -= 3;
				speed += 3;
				break;
			case 5:
			case 6:
				dtc -= 4;
				speed += 4;
				break;
			case 7:
			case 8:
				dtc -= 5;
				speed += 5;
				break;
			case 9:
			case 10:
			case 11:
				dtc -= 5;
				speed += 5;
				break;
			}
		}
		else if (dtc > 0) {
			dtc--;
			speed++;
		}
		printf("dtc : %d", dtc);//이동 확인
	}
}
void updown() {
	if (on == 0) {
		if (locat == 1) { //방향 설정
			up = 0;
		}
		else if (locat == 9) {
			up = 1;
		}
		if (up == 0) {
			locat++;
		}
		else if (up == 1) {
			locat--;
		}
	}
	title[34 + locat][50] = '>';
}
void copy() {
	for (int i = 0; i < 50; i++) {
		strcpy(title[i], board[i]); // 배경복사
	}
	updown(); //위 아래로 움직이는 화살표
	push();
	if (46 - speed < 0) { //벽에 닿았을 경우 후진후 종료
		dtc = 0;
		sweep();
		speed = 45;
		on = 0;
	}
	title[48][53] = b1 + 48; title[48][55] = b2 + 48; //남은 공 갯수 출력
	if (player == 0) { //현재 플레이어 확인
		title[46][2] = '>';
		title[47][52] = 'p'; title[47][53] = '1';
	}
	else if (player == 1) {
		title[48][2] = '>';
		title[47][55] = 'p'; title[47][56] = '2';
	}
	title[46][9] = (p1 / 10) + 48; title[46][10] = p1 % 10 + 48; //1의 점수 확인
	title[48][9] = (p2 / 10) + 48; title[48][10] = p2 % 10 + 48; //2의 점수 확인

	title[46 - speed][28] = ball[0]; //공 위치 입력
	title[46 - speed][29] = ball[1];
	title[46 - speed][30] = ball[2];
}
void print() {
	for (int i = 0; i < 50; i++) {
		printf("\t\t\t\t\t\t");
		printf("%s", title[i]);
		if (i != 49)
			printf("\n");
	}
	Sleep(twink); //화면 초기화
	system("cls");
}
void gamestart() {
	while (1) {
		copy();
		twink = 250;
		if (on == 0) {
		}
		else if (on == 1) {/*
			if (what == 0) {
				st = (double)clock() / CLOCKS_PER_SEC;
				what = 1;
			}*/
			used = 0; //점수 계산 초기화
			sweep();
		}
		else {
			up = 0;
			locat = 4;
			twink = 2000;
			print();
			point(); //점수 계산후 전환
			gn = speed = dtc = 0;
			on = 0;
			continue;
		}
		print();
		click = 0;
	}
}
int main() {
	gamestart();
}
