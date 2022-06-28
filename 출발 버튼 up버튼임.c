#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<conio.h>
#include<time.h>
char empty[50][60] = {
	" ----------------------------------------------------------",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	"|                                                          |",
	" ---------------------------------------------------------- "
};
char startboard[50][60] = {
	" --------------------------------------------------------- ",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                    -----     -------------      -----   |",
	"|  -----------      |     |    |             |   |     |  |",
	"| |            |    |     |     ----------   |   |     |  |",
	"|  -------     |    |     |               |  |   |     |  |",
	"|        |     | ----     |     ----------   |   |     |  |",
	"|   -----      |          |    |             |   |     |  |",
	"|  |           | ----     |    |   ----------    |     |  |",
	"|   ------     |    |     |    |  |              |     |  |",
	"|        |     |    |     |    |   ----------    |     |  |",
	"|         -----      -----     |             |   |     |  |",
	"|     ---------------------     -------------     -----   |",
	"|    |                     |                              |",
	"|     -----------------    |               ------         |",
	"|                      |   |           ----      ----     |",
	"|     -----------------    |         ---            ---   |",
	"|    |                     |         --              --   |",
	"|    |   ------------------          --              --   |",
	"|    |  |                             ---          ---    |",
	"|    |   -------------------           ----      ----     |",
	"|    |                      |              ------         |",
	"|     ----------------------                              |",
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
	"|   ---------------   ---------------   ---------------   |",
	"|  |               | |               | |               |  |",
	"|  |               | |               | |               |  |",
	"|  |   게임 시작   | |   게임 설명   | |   게임 종료   |  |",
	"|  |               | |               | |               |  |",
	"|  |               | |               | |               |  |",
	"|   ---------------   ---------------   ---------------   |",
	"|                                                         |",
	"|            * 전체화면으로 플레이 해주십시오             |",
	" --------------------------------------------------------- "
};
char board[50][60] = {
	" ---------------------------------------------------------",
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
	"|       p1 :    |                                 |남은 공|",
	"| 점수          |                                 |       |",
	"|       p2 :    |                                 |       |",
	" --------------------------------------------------------- "
};
char title[50][60];
char name1[6], name2[6];
int on = 0, locat = 4, up = 0, dtc = 0, speed = 0, player = 0, used = 0, gn, click = 0, twink = 250;
short b1 = 5, b2 = 5, p1 = 0, p2 = 0, bx = 29, by, turn = 1, LR = 1; // 30 미만
double st; //시작 시간
enum {
	BLACK,
	DARK_BLUE,
	DARK_GREEN,
	DARK_SKYBLUE,
	DARK_RED,
	DARK_VOILET,
	DAKR_YELLOW,
	GRAY,
	DARK_GRAY,
	BLUE,
	GREEN,
	SKYBLUE,
	RED,
	VIOLET,
	YELLOW,
	WHITE,
};
void setColor(unsigned short text) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text);
}
void wrn() {//이름 쓰기
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t이름을 입력하세요.(최대 영어 6글자, 한글 3글자 입력후 엔터) \n");
	printf("\n\t\t\t\t\t\t\tp1\tp2\n\t\t\t\t\t\t\t");
	scanf("%s %s", name1, name2);
	Sleep(1000);
	printf("\t\t\t\t\t\t\t3\n");
	Sleep(1000);
	printf("\t\t\t\t\t\t\t2\n");
	Sleep(1000);
	printf("\t\t\t\t\t\t\t1\n");
	Sleep(1000);
	printf("\t\t\t\t\t\t\t시작!\n");
	Sleep(1000);
	turn = 1;
}
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
		click = 0;
	}
}
void push() {
	if (_kbhit()) {
		char a = _getch();
		if (turn == 0) {
			if (a == -32) {//방향키 입력
				a = _getch();
				switch (a) {
				case 75://좌
					LR--;
					break;
				case 77://우
					LR++;
					break;
				}
				if (LR < 0) {
					LR = 2;
				}
				else if (LR > 2) {
					LR = 0;
				}
			}
			else  if (a == ' ') { //선택
				if (LR == 0) {
					wrn();
					system("cls");
				}
				else if (LR == 1) {

				}
				else if (LR == 2)
					exit(0);
			}
		}
		else if (turn == 1) {
			if (a == ' ') {//입력
				if (on == 1) {//갈 거리 증가
					click = 1;
					if (click) {
						dtc += ((gn + 5) / (4 * (((double)clock() / CLOCKS_PER_SEC) - st))); //나중 시간 - 출발 시간 초당
					}
				}
			}
			else if (a == -32) {
				a = _getch();
				if (a == 72) {
					if (on == 0) {//속도 초기화
						if (click == 0) {
							dtc = 0;
							if (locat > 5)
								dtc += (10 - locat) + 9;
							else
								dtc += locat + 9;
							gn = dtc;
							on = 1;
						}
					}
				}
			}
			click = 0;
		}
	}
}
void sweep() {
	if (dtc <= 0) { //모두 초기화
		on = 2;
	}
	else {
		click = 0;
		push();
		if (dtc > 1) {
			speed += dtc / 4 + 1;
			dtc -= dtc / 4 + 1;
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
	if (turn == 0) {
		for (int i = 0; i < 50; i++) {
			strcpy(title[i], startboard[i]);
		}
	}
	else if (turn == 1) {
		for (int i = 0; i < 50; i++) {
			strcpy(title[i], board[i]); // 배경복사
		}
		if (46 - speed < 0) { //벽에 닿았을 경우 후진후 종료
			for (int i = 0; i < 2; i++) {
				speed--;
			}
			on = 2;
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
		if (name1[0] != '\0') {//칸 지우고 이름 출력
			for (int i = 0; i < 6; i++) { //칸 초기화
				title[46][4 + i] = ' ';
			}
			for (int i = 0; name1[i] != '\0'; i++) {
				title[46][4 + i] = name1[i];
			}
		}
		if (name2[0] != '\0') {//칸 지우고 이름 출력
			for (int i = 0; i < 6; i++) { //칸 초기화
				title[48][4 + i] = ' ';
			}
			for (int i = 0; name2[i] != '\0'; i++) {
				title[48][4 + i] = name2[i];
			}
		}
		title[46][13] = (p1 / 10) + 48; title[46][14] = p1 % 10 + 48; //1의 점수 확인
		title[48][13] = (p2 / 10) + 48; title[48][14] = p2 % 10 + 48; //2의 점수 확인

		by = 46 - speed;
		title[by][bx - 1] = '|'; //공 위치 입력
		title[by][bx] = '@';
		title[by][bx + 1] = '|';
	}
}
void print() {
	if (turn == 0) {
		for (int i = 0; i < 50; i++) {
			printf("\t\t\t\t\t\t");
			for (int j = 0; j < 60; j++) {
				if (40 <= i && i <= 46) {
					if (LR == 0 && 3 <= j && j <= 19)
						setColor(GREEN);
					else if (LR == 1 && 21 <= j && j <= 37)
						setColor(GREEN);
					else if (LR == 2 && 39 <= j && j <= 57)
						setColor(GREEN);
				}
				printf("%c", title[i][j]);
				setColor(WHITE);
			}
			if (i != 49)
				printf("\n");
		}
	}
	else if (turn == 1) {
		for (int i = 0; i < 50; i++) {
			printf("\t\t\t\t\t\t");
			for (int j = 0; j < 60; j++) {
				if (i == by && j == bx) {
					setColor(RED);
				}
				if ((i == 48 || i == 46) && j > 2 && j <= 14) {
					setColor(SKYBLUE);
				}
				if (35 <= i && i <= 43 && j == 50) {
					setColor(SKYBLUE);
				}
				printf("%c", title[i][j]);
				setColor(WHITE);
			}
			if (i != 49)
				printf("\n");
		}
	}
	Sleep(twink); //화면 초기화
	system("cls");
	twink = 250;
}
void gamestart() {
	while (1) {
		copy();
		updown(); //위 아래로 움직이는 화살표
		if (on == 0) { //초기화
			st = (double)clock() / CLOCKS_PER_SEC;
			push();
		}
		else if (on == 1) { //가속
			used = 0; //점수 계산 초기화
			sweep();
		}
		else { //계산
			twink = 2000;
			print();
			point(); //점수 계산후 전환
			up = gn = speed = dtc = 0;
			locat = 4;
			on = 0;
			continue;
		}
		print();
		if (b1 == 0 && b2 == 0) {//종료
			break;
		}
	}
}
void gametitle() {
	push();
	copy();
	print();
}
int main() {
	while (1) {
		if (turn == 0) {
			gametitle();
		}
		else if (turn == 1) {
			gamestart();
		}
	}
}
