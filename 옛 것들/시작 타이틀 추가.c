#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<conio.h>
#include<time.h>
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
	"|  |   ?????? ??????   | |   ?????? ??????   | |   ?????? ??????   |  |",
	"|  |               | |               | |               |  |",
	"|  |               | |               | |               |  |",
	"|   ---------------   ---------------   ---------------   |",
	"|                                                         |",
	"|                                                         |",
	" --------------------------------------------------------- "
};
char starttitle[50][60];

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
	"|       p1 :    |                                 |?????? ???|",
	"| ??????          |                                 |       |",
	"|       p2 :    |                                 |       |",
	" --------------------------------------------------------- "
};
char title[50][60];
char name1[6] = {"what"}, name2[6] = {"hello"};
int on = 0, locat = 4, up = 0, dtc = 0, speed = 0, player = 0, used = 0, gn, click = 0, twink = 200;
short b1 = 5, b2 = 5, p1 = 0, p2 = 0, bx = 29, by, turn = 0, lr = 1; // 30 ??????
double st; //?????? ??????
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
void wrn() {//?????? ??????

}
void point() {
	if (used == 0) {
		if (player == 0) { //1??? ?????? ??????
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
		else if (player == 1) { //2??? ?????? ??????
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
		used = 1; //?????? ?????? ????????? ??????
	}
}
void push() {
	if (_kbhit()) {
		char a = _getch();
		if (turn == 0) {
			if (a == -32) {
				a = _getch();
				switch (a) {
				case 75://???
					lr--;
					break;
				case 77://???
					lr++;
					break;
				}
				if (lr < 0) {
					lr = 2;
				}
				else if (lr > 2) {
					lr = 0;
				}
			}
			else  if (a == ' ') { //???????????? ?????? ?????? ?????? ???
				if (lr == 0) {
					wrn();
					turn = 1;
				}
				else if (lr == 1) {

				}
				else if (lr == 2)
					exit(0);
			}
		}
		else if (turn == 1) {
			if (a == ' ') {//??????
				click = 1;
				if (on == 1) {//??? ?????? ??????
					if (click) {
						dtc += ((gn) / (4 * (((double)clock() / CLOCKS_PER_SEC) - st))); //?????? ?????? - ?????? ?????? ??????
					}
				}
				else if (on == 0) {//?????? ?????????
					dtc = 0;
					if (locat > 5)
						dtc += (10 - locat) + 10;
					else
						dtc += locat + 10;
					gn = dtc;
					on = 1;
				}
				click = 0;
			}
		}
	}
}
void sweep() {
	if (dtc <= 0) { //?????? ?????????
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
		printf("dtc : %d", dtc);//?????? ??????
	}
}
void updown() {
	if (on == 0) {
		if (locat == 1) { //?????? ??????
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
		strcpy(title[i], board[i]); // ????????????
	}
	if (46 - speed < 0) { //?????? ????????? ?????? ????????? ??????
		speed = 45;
		on = 2;
	}
	title[48][53] = b1 + 48; title[48][55] = b2 + 48; //?????? ??? ?????? ??????
	if (player == 0) { //?????? ???????????? ??????
		title[46][2] = '>';
		title[47][52] = 'p'; title[47][53] = '1';
	}
	else if (player == 1) {
		title[48][2] = '>';
		title[47][55] = 'p'; title[47][56] = '2';
	}
	if (name1[0] != '\0') {//??? ????????? ?????? ??????
		for (int i = 0; i < 6; i++) { //??? ?????????
			title[46][4 + i] = ' ';
		}
		for (int i = 0; name1[i] != '\0'; i++) {
			title[46][4 + i] = name1[i];
		}
	}
	if (name2[0] != '\0') {//??? ????????? ?????? ??????
		for (int i = 0; i < 6; i++) { //??? ?????????
			title[48][4 + i] = ' ';
		}
		for (int i = 0; name2[i] != '\0'; i++) {
			title[48][4 + i] = name2[i];
		}
	}
	title[46][13] = (p1 / 10) + 48; title[46][14] = p1 % 10 + 48; //1??? ?????? ??????
	title[48][13] = (p2 / 10) + 48; title[48][14] = p2 % 10 + 48; //2??? ?????? ??????

	by = 46 - speed;
	title[by][bx - 1] = '|'; //??? ?????? ??????
	title[by][bx] = '@';
	title[by][bx + 1] = '|';
}
void print() {
	for (int i = 0; i < 50; i++) {
		printf("\t\t\t\t\t\t");
		for (int j = 0; j < 60; j++) {
			if (i == by && j == bx) {
				setColor(RED);
			}
			printf("%c", title[i][j]);
			setColor(WHITE);
		}
		if (i != 49)
			printf("\n");
	}
	Sleep(twink); //?????? ?????????
	system("cls");
	twink = 250;
}
void gamestart() {
	while (1) {
		copy();
		updown(); //??? ????????? ???????????? ?????????
		if (on == 0) { //?????????
			st = (double)clock() / CLOCKS_PER_SEC;
			push();
		}
		else if (on == 1) { //??????
			used = 0; //?????? ?????? ?????????
			sweep();
		}
		else { //??????
			twink = 2000;
			print();
			point(); //?????? ????????? ??????
			up = gn = speed = dtc = 0;
			locat = 4;
			on = 0;
			continue;
		}
		print();
	}
}

void tcopy() {
	for (int i = 0; i < 50; i++) {
		strcpy(starttitle[i], startboard[i]);
	}
}
void tprint() {
	for (int i = 0; i < 50; i++) {
		printf("\t\t\t\t\t\t");
		for (int j = 0; j < 60; j++) {
			if (40 <= i && i <= 46) {
				if (lr == 0 && 3 <= j && j <= 19)
					setColor(RED);
				else if (lr == 1 && 21 <= j && j <= 37)
					setColor(RED);
				else if (lr == 2 && 39 <= j && j <= 57)
					setColor(RED);
			}
			printf("%c", starttitle[i][j]);
			setColor(WHITE);
		}
		if (i != 49)
			printf("\n");
	}
}
void gametitle() {
	tcopy();
	push();
	tprint();
	Sleep(twink);
	system("cls");
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
