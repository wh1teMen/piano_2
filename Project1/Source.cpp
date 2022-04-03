#include<iostream>
#include <stdlib.h>
#include<time.h>
#include<windows.h>
#include<conio.h>
#include<string>
using namespace std;
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE); // Получаем дескриптор консоли
// Текстовый курсор в точку x,y 
void GoToXY(short x, short y)
{
	SetConsoleCursorPosition(hStdOut, { x, y });
}
void ConsoleCursorVisible(bool show, short size)
{
	CONSOLE_CURSOR_INFO structCursorInfo;
	GetConsoleCursorInfo(hStdOut, &structCursorInfo);
	structCursorInfo.bVisible = show; // изменяем видимость курсора
	SetConsoleCursorInfo(hStdOut, &structCursorInfo);
}

int main() {
	setlocale(LC_ALL, "ru");
	ConsoleCursorVisible(false, 100);
	system("title Фортепиано!!!");
	int active_fort = 0;
	int x = 0, y = 0;
	int& px = x;
	char ch;
	
	while (true) {
				
		for (int i = 0; i < 7; i++) {
			if (i == active_fort) SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			else 	SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			for (int j = 0; j < 7; j++) {
				cout << "|##|";
			}
			cout << endl;

		}
		cout << "[Z] " << "[X] " << "[C] " << "[V] " << "[B] " << "[N] " << "[M] " << endl;

		ch = _getch();
		switch (ch)
		{
		case 27:
			exit(0);
		case 122:
			
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(px, j);
					if (j == active_fort && i == active_fort) SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\nНота--->ДО" << endl;
			}
			Beep(293.66, 300);
			system("CLS");
			break;
		case 120:
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(px + 4, j);
					if (j == active_fort && i == active_fort) SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\nНота--->РЕ" << endl;
			}
			Beep(329.63, 300);
			system("CLS");
			break;
		case 99:
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(px+8, j);
					if (j == active_fort && i == active_fort) SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\nНота--->МИ" << endl;
			}
			Beep(329.63, 300);
			system("CLS");
			break;
		case 118:
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(x + 12, j);
					if (j == active_fort && i == active_fort) SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				cout << "|##|" << endl;
				}
				cout << "\nНота--->ФА" << endl;
			}
			Beep(349.23, 300);
			system("CLS");
			break;
		case 98:
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(x + 16, j);
					if (j == active_fort && i == active_fort) SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				cout << "|##|" << endl;
				}
				cout << "\nНота--->СОЛЬ" << endl;
			}
			Beep(392.00, 300);
			system("CLS");
			break;
		case 110:
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(x + 20, j);
					if (j == active_fort && i == active_fort) SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\nНота--->ЛЯ" << endl;

			}
			Beep(440.00, 300);
			system("CLS");
			break;
		case 109:
			for (int i = 0; i < 1; i++) {
				for (int j = 0; j < 7; j++) {
					GoToXY(x + 24, j);
					if (j == active_fort && i == active_fort) SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					else SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					cout << "|##|" << endl;
				}
				cout << "\nНота--->СИ" << endl;
			}
			Beep(493.88, 300);
			system("CLS");
			break;
		default:cout << "ошибка ввода " << endl;

		}
	}


	return 0;
}