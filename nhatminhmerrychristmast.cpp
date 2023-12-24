#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define resetPos(a, b, c) SetConsoleCursorPosition(a, b, c);

using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

void textColor(int);
void printLight(int, int, char, int);
void printTreeAndLeaf();
void printMerryChrismast();

void textColor (int x) {
    SetConsoleTextAttribute(h, x);
}

void printLight(int color, int sleep, char c, int chop) {
	textColor(color);
	Sleep(chop);
    resetPos(hConsole, {7, 1}); printf("%c", c);
    resetPos(hConsole, {4, 2}); printf("%c", c); Sleep(sleep);
    resetPos(hConsole, {8, 2}); printf("%c", c);
    resetPos(hConsole, {6, 2}); printf("%c", c); Sleep(sleep);
    resetPos(hConsole, {6, 4}); printf("%c", c);
    resetPos(hConsole, {7, 5}); printf("%c", c); Sleep(sleep);
    resetPos(hConsole, {4, 6}); printf("%c", c);
    resetPos(hConsole, {6, 7}); printf("%c", c);
    resetPos(hConsole, {2, 7}); printf("%c", c); Sleep(sleep);
    resetPos(hConsole, {5, 8}); printf("%c", c);
    resetPos(hConsole, {10, 8}); printf("%c", c);
    resetPos(hConsole, {1, 8}); printf("%c", c); Sleep(sleep);
    //chop tat!
    Sleep(chop);
    resetPos(hConsole, {3, 8}); printf("%c", c);
    resetPos(hConsole, {8, 8}); printf("%c", c); Sleep(sleep);
    resetPos(hConsole, {5, 10}); printf("%c", c);
    resetPos(hConsole, {6, 11}); printf("%c", c); Sleep(sleep);
    resetPos(hConsole, {7, 11}); printf("%c", c);
    resetPos(hConsole, {4, 12}); printf("%c", c); Sleep(sleep);
    resetPos(hConsole, {9, 13}); printf("%c", c);
    resetPos(hConsole, {5, 13}); printf("%c", c);
    resetPos(hConsole, {2, 14}); printf("%c", c);
    resetPos(hConsole, {8, 14}); printf("%c", c); Sleep(sleep);
    resetPos(hConsole, {10, 14}); printf("%c", c);
    resetPos(hConsole, {0, 50}); printf("%c", c);
}

void printTreeAndLeaf() {
	printf("      *\n");
	printf("     ** \n"); Sleep(300);
	printf("     * * \n");
	printf("    ! * !\n");
	printf("     * *\n"); Sleep(200);
	printf("    *** *\n");
	printf("   * "); Sleep(400);
	printf("*****\n");
	printf("   *** ****\n"); Sleep(400);
	printf("  * * ** * *\n");
	printf(" !    *    !\n");
	printf("      **\n"); Sleep(400);
	printf("    **  *\n");
	printf("   * ***"); Sleep(300);
	printf("**\n");
	printf("  *** *** *\n");
	printf(" * ***** * *\n"); Sleep(400);
	printf(" !    *    !\n"); Sleep(200);
	printf("     *.*\n"); Sleep(200);
	printf("  . *.*.* .\n");
}

void printMerryChrismast(int sleep) {
	textColor(F);
	resetPos(hConsole, {21, 12}); 
	printf("~~ MERRY");
	Sleep(sleep);
	printf(" CHRISTMAS ~~");
	resetPos(hConsole, {20, 13});
	Sleep(sleep);
	printf("code by ");
	printf("nhat minh :33");
	textColor(F);
}

int main() {
    CONSOLE_CURSOR_INFO cursorInfo;
    cursorInfo.bVisible = false;
    cursorInfo.dwSize = 100;
    SetConsoleCursorInfo(hConsole, &cursorInfo);
    
    textColor(8);
    
	printTreeAndLeaf();
	
	printLight(5, 300, '0', 0);
	printLight(5, 0, ' ', 0);
	Sleep(100);
	printLight(5, 0, '0', 0);
	
	printMerryChrismast(200);
	
	int r = 1; 
	for (;;) {
		if (r == 1) {
			Sleep(600);
			system("color 6");
			printMerryChrismast(0);
		}
		else if (r == 2) {
			printLight(0, 0, ' ', 300);
			printLight(4, 0, '0', 500);
			printMerryChrismast(0);
		}
		else if (r == 3) {
			Sleep(600);
			system("color 7");
			printMerryChrismast(0);
		}
		else if (r == 4) {
			printLight(0, 0, ' ', 300);
			printLight(3, 0, '0', 500);
			printMerryChrismast(0);
		}
		else if (r == 5) {
			Sleep(700);
			system("color 1");
			printMerryChrismast(0);
		}
		else {
			printLight(0, 0, ' ', 300);
			printLight(3, 0, '0', 500);
			r = 0;
		}
		++r;
	}	
	resetPos(hConsole, {0, 18});
	return 0;
}
