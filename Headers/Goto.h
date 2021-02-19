#ifndef GOTO_H_INCLUDED
#define GOTO_H_INCLUDED
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); /// usado para el metodo goto
COORD CursorPosition; /// usado para el metodo goto

void gotoXY(int x, int y)
{
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console,CursorPosition);
}


#endif // GOTO_H_INCLUDED
