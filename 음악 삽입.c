#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<conio.h>
#include<time.h>
#include <mmsystem.h>
#include <Digitalv.h>
#pragma comment(lib,"winmm.lib")
char mtboard[50][60] = {
	" --------------------------------------------------------- ",
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
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	" --------------------------------------------------------- ",
};
char overboard[50][60] = {
	" --------------------------------------------------------- ",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                    ????????? ????????????????                   |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                            :                            |",
	"|                                                         |",
	"|                            :                            |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                         ?????????                          |",
	"|                           ???                            |",
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
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	"|                                                         |",
	" --------------------------------------------------------- "
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
	"|          * ???????????? ?????? ??????????????? ????????????.           |",
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
	"|            * ?????????????????? ????????? ???????????????             |",
	"|                                                         |",
	" --------------------------------------------------------- "
};
char mainboard[50][60] = {
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
char name1[6] = {"hello"}, name2[6] = {"world"}, oname[6] = {""};
int on = 0, locat = 4, up = 0, dtc = 0, speed = 0, gn, twink = 250, twinks = 0;
short b1 = 5, b2 = 5, p1 = 0, p2 = 0, bx = 29, by, turn = 0, LR = 1, player = 0, used = 0, sure = 0; // 30 ??????
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
void push(); void print();
void xplain() {
	for (int i = 8; i > 0; i--) {
		printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t?????? ??????\n\n");
		printf("\t\t\t\t\t\t\t1. ???????????? ????????? ????????? ????????? ??? ????????????.\n\n");
		printf("\n\n\t\t\t\t\t\t\t\t\t\t?????? ??????\n\n");
		printf("\t\t\t\t\t\t\t1. ??? ????????? ???????????? ?????? ?????? ????????? ???????????? ????????????.\n\n");
		printf("\t\t\t\t\t\t\t2. ????????? ???????????? 5???, 4???, 3???, 2???, 1??? ????????? ???????????????.\n\n");
		printf("\t\t\t\t\t\t\t3. ???????????? ?????? ?????? ?????? ??????????????? ????????????.\n\n");
		printf("\t\t\t\t\t\t\t4. ????????? ????????? ?????? ?????? ??????????????? ????????????.\n\n");
		printf("\t\t\t\t\t\t\t5. ?????? ??????????????? 5?????? ????????? ????????????.\n\n");
		printf("\n\t\t\t\t\t\t\t????????? %d ??? ???????????????.", i);
		Sleep(1000);
		system("cls");
	}
}
void setColor(unsigned short text) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text);
}
void wrn() {//?????? ??????
	do {
		strcpy(name1, oname);
		strcpy(name2, oname);
		system("cls");
		sure = 0;
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t????????? ???????????????.(?????? ?????? 6??????, ?????? 3?????? ????????? ??????) \n");
		printf("\n\t\t\t\t\t\t\tp1\tp2\n\t\t\t\t\t\t\t");
		scanf("%s %s", name1, name2);
		system("cls");
		LR = 0;
		while (sure == 0) {
			push();
			print();
		}
	} while (sure != 1);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t????????? ???????????????.\n");
	printf("\t\t\t\t\t\t\t3\n");
	Sleep(1000);
	printf("\t\t\t\t\t\t\t2\n");
	Sleep(1000);
	printf("\t\t\t\t\t\t\t1\n");
	Sleep(1000);
	printf("\t\t\t\t\t\t\t??????!\n");
	Sleep(1000);
	turn = 1;
	on = 0;
	system("cls");
}
void point() {
	if (used == 0) {
		if (player == 0) { //1??? ?????? ??????
			b1--;
			switch (46 - speed) {
			case 1:
			case 2:
			case 19:
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
			case 19:
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
			if (on == 0) {
				if (a == -32) {//????????? ??????
					a = _getch();
					switch (a) {
					case 75://???
						LR--;
						break;
					case 77://???
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
				else  if (a == ' ') { //??????
					if (LR == 0) {
						system("cls");
						on = 1;
					}
					else if (LR == 1) {//??????
						xplain();
					}
					else if (LR == 2)
						exit(0);
				}
			}
			else if (on == 1) {
				if (a == -32) {
					a = _getch();
					switch (a) {
					case 72:
						LR--;
						break;
					case 80:
						LR++;
						break;
					}
					if (LR < 0) {
						LR = 1;
					}
					if (LR > 1) {
						LR = 0;
					}
				}
				else if (a == ' ') {
					if (LR == 0) {
						sure = 1;
					}
					else if (LR == 1) {
						sure = 2;
					}
				}
			}
		}
		else if (turn == 1) {
			if (on == 0) {
				if (a == ' ') {//?????? ?????????
					if (locat > 5)
						dtc = (10 - locat) + 9;
					else
						dtc = locat + 9;
					gn = dtc;
					on = 1;
				}
			}
			else if (on == 1) {//??????
				if (a == -32) {//??? ?????? ??????, up??????
					char a = _getch();
					if (a == 72) {
						dtc += ((gn + 2) / (4 * (((double)clock() / CLOCKS_PER_SEC) - st))); //?????? ?????? - ?????? ?????? ??????
					}
				}
			}
			else if (on == 2) {
				return;
			}
		}
	}
}
void sweep() {
	if (dtc <= 0) { //?????? ?????????
		on = 2;
	}
	else {
		push();
		if (dtc > 1) {
			speed += dtc / 4 + 1;
			dtc -= dtc / 4 + 1;
		}
		else if (dtc > 0) {
			dtc--;
			speed++;
		}
		printf("dtc : %d, locat : %d", dtc, locat);//?????? ??????
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
}
void copy() {
	if (turn == 0) {
		for (int i = 0; i < 50; i++) {
			strcpy(title[i], startboard[i]);
		}
	}
	else if (turn == 1) {
		for (int i = 0; i < 50; i++) {
			strcpy(title[i], mainboard[i]); // ????????????
		}
		title[34 + locat][50] = '>';
		if (46 - speed < 0) { //?????? ????????? ?????? ????????? ??????
			on = 2;
			for (int i = 0; i < dtc; i++) {
				speed--;
			}
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
			for (int i = 0; name1[i] != '\0' && i < 6; i++) {
				title[46][4 + i] = name1[i];
			}
		}
		if (name2[0] != '\0') {//??? ????????? ?????? ??????
			for (int i = 0; i < 6; i++) { //??? ?????????
				title[48][4 + i] = ' ';
			}
			for (int i = 0; name2[i] != '\0' && i < 6; i++) {
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
	else if (turn == 2) {
		for (int i = 0; i < 50; i++) {
			strcpy(title[i], overboard[i]);
		}
		for (int i = 0; i < 6 && name1[i] != '\0' || name2[i] != '\0'; i++) {
			title[14][26 + i] = p2 > p1 ? name2[i] : p1 == p2 ? ' ' : name1[i];
		}
		if (twinks >= 1500) {
			if (name1[0] != '\0') {//??? ????????? ?????? ??????
				for (int i = 0; name1[i] != '\0' && i < 6; i++) {
					title[10][22 + i] = name1[i];
				}
			}
			if (name2[0] != '\0') {//??? ????????? ?????? ??????
				for (int i = 0; name2[i] != '\0' && i < 6; i++) {
					title[12][22 + i] = name2[i];
				}
			}
			title[10][32] = p1 / 10 + 48; title[10][33] = p1 % 10 + 48;
			title[12][32] = p2 / 10 + 48; title[12][33] = p2 % 10 + 48;
		}
		if (twinks <= 2500) {
			strcpy(title[14], title[13]);
		}
		if (twinks <= 2500 || p1 != p2) {
			strcpy(title[16], title[13]);
		}
		if (twinks <= 2500 || p1 == p2) {
			strcpy(title[17], title[13]);
		}
		if (twinks >= 10000) {
			twinks = 0;
			turn = 3;
		}
	}
}
void print() {
	if (turn == 0) {
		if (on == 0) {
			for (int i = 0; i < 50; i++) {
				printf("\t\t\t\t\t\t");
				if (40 <= i && i <= 46) {
					for (int j = 0; j < 60; j++) {
						if (LR == 0 && 3 <= j && j <= 19)
							setColor(GREEN);
						else if (LR == 1 && 21 <= j && j <= 37)
							setColor(GREEN);
						else if (LR == 2 && 39 <= j && j <= 57)
							setColor(GREEN);
						printf("%c", title[i][j]);
						setColor(WHITE);
					}
					if (i != 49)
						printf("\n");
					continue;
				}
				printf("%s", title[i]);
				if (i != 49)
					printf("\n");
			}
		}
		else if (on == 1) {
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tp1 : %s\n"
				"\t\t\t\t\t\t\tp2 : %s\n\t\t\t\t\t\t\t????????? ????????????????????????? : \n\n\n", name1, name2);
			printf("\t\t\t\t\t\t\t");
			if (LR == 0) {
				setColor(GREEN);
				printf("> ");
			}
			printf("???, ????????? ?????????????????????.\n\n");
			setColor(WHITE);
			printf("\t\t\t\t\t\t\t");
			if (LR == 1) {
				setColor(GREEN);
				printf("> ");
			}
			printf("??????, ?????? ???????????? ?????????????????????.\n\n");
			setColor(WHITE);
		}
	}
	else if (turn == 1) {
		for (int i = 0; i < 50; i++) {
			printf("\t\t\t\t\t\t");
			if (i == by || i == 34 + locat || 46 <= i && i <= 48) {
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
				continue;
			}
			printf("%s", title[i]);
			if (i != 49)
				printf("\n");
		}
	}
	else if (turn == 2) {
		printf("%d", twinks);//??? ??????
		for (int i = 0; i < 50; i++) {
			printf("\t\t\t\t\t\t");
			printf("%s", title[i]);
			if (i != 49)
				printf("\n");
		}
		twinks += twink;
	}
	Sleep(twink); //?????? ?????????
	system("cls");
}
void gamestart() {
	while (1) {
		copy();
		if (on == 0) { //?????????
			st = (double)clock() / CLOCKS_PER_SEC;
			push();
		}
		else if (on == 1) { //??????
			used = 0; //?????? ?????? ?????????
			sweep();
		}
		else if (on == 2) { //??????
			for (int i = 0; i < 50; i++) {
				push();
			}
			print();
			for (int i = 0; i < 7; i++) {
				updown(); //??? ????????? ???????????? ?????????
				copy();
				print();
			}
			twink = 250;
			point(); //?????? ????????? ??????
			on = up = gn = speed = 0;
			locat = 4;
			break;
		}
		print();
		updown(); //??? ????????? ???????????? ?????????
		if (b1 <= 0 && b2 <= 0) {//??????
			turn = 2;
			break;
		}
	}
}
void gametitle() {
	copy();
	print();
	for (int i = 0; i < 3; i++)
		push();
}
void gameover() {
	copy();
	print();
}
int main() {
	PlaySound(TEXT("C:\\Users\\USER\\Desktop\\?????? ????????????\\???????????? ??????.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
	LR = 1;
	p1 = p2 = on = 0;
	while (1) {
		if (turn == 0) {
			if (on == 0) {
				gametitle();
			}
			else if (on == 1) {
				wrn();
			}
		}
		else if (turn == 1) {
			gamestart();
		}
		else if (turn == 2) {//?????? ?????? ??????
			gameover();
		}
		else if (turn == 3) {
			setColor(SKYBLUE);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tGAME OVER");
			setColor(WHITE);
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			return 0;
		}
	}
}
