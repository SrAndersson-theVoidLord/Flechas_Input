#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include "Headers/Goto.h"
using namespace std;



void gotoXY(int,int); /// esta funcion esta definida en el archivo Goto.h si esto es nuevo para usted

int main()
{
	int menu_item=0, run, x=7;
	bool running = true;

	gotoXY(18,5); cout << "Main Menu";
	gotoXY(18,7); cout << "->";

	while(running)
	{
                gotoXY(20,7);  cout << "1) Input";
		gotoXY(20,8);  cout << "2) Output";
		gotoXY(20,9);  cout << "3) ...";
		gotoXY(20,10); cout << "4) ...";
		gotoXY(20,11); cout << "Quit Program";

		system("pause>nul"); ///pause>null para que no imprima ningun mensaje por pantalla el system (pause)

		if(GetAsyncKeyState(VK_DOWN) && x != 11) //down button pressed
			{
				gotoXY(18,x); cout << "  ";
				x++;
				gotoXY(18,x); cout << "->";
				menu_item++;
				continue;

			}

		if(GetAsyncKeyState(VK_UP) && x != 7) ///flecha de arriba presionada
			{
				gotoXY(18,x); cout << "  ";
				x--;
				gotoXY(18,x); cout << "->";
				menu_item--;
				continue;
			}

		if(GetAsyncKeyState(VK_RETURN)){ /// tecla enter presionada

			switch(menu_item){

				case 0: {

					gotoXY(20,16);
					cout << "You chose Input...     ";
					break;
				}


				case 1: {
					gotoXY(20,16);
					cout << "You chose Output...     ";
					break;
				}

				case 2: {
					gotoXY(20,16);
					cout << "You chose Option 3...     ";
					break;
				}

				case 3: {
					gotoXY(20,16);
					cout << "You chose Option 4...     ";
					break;
				}

				case 4: {
					gotoXY(20,16);
					cout << "The program has now terminated!!";
					running = false;
				}

			}

		}

	}

	gotoXY(20,21);
	return 0;
}

