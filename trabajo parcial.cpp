#include "pch.h"
#include <time.h>
#include <stdlib.h>
#include <iostream>

using namespace System;
using namespace std;

int menu_principal()
{
	Console::SetCursorPosition(13, 3);
	cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "   " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "     " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
	Console::SetCursorPosition(13, 4);
	cout << "     " << char(219) << char(219) << "       " << char(219) << char(219) << "        " << char(219) << "  " << char(219) << char(219) << "       " << char(219) << char(219) << "  " << char(219) << char(219) << "        " << char(219) << char(219) <<  "   " << char(219) << char(219);
	Console::SetCursorPosition(13, 5);
	cout << "     " << char(219) << char(219) << "       " << char(219) << char(219) << "       " << char(219) << char(219) << "  " << char(219) << char(219) << "       " << char(219) << char(219) << "  " << char(219) << char(219) << "         " << char(219) << char(219) << "  " << char(219) << char(219);
	Console::SetCursorPosition(13, 6);
	cout << "     " << char(219) << char(219) << "       " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "   " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "  " << char(219) << char(219) << "         " << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
	Console::SetCursorPosition(13, 7);
	cout << "     " << char(219) << char(219) << "       " << char(219) << char(219) << "      " << char(219) << char(219) << "   " << char(219) << char(219) << "       " << char(219) << char(219) << "  " << char(219) << char(219) << "         " << char(219) << char(219) << "  " << char(219) << char(219);
	Console::SetCursorPosition(13, 8);
	cout << "     " << char(219) << char(219) << "       " << char(219) << char(219) << "       " << char(219) << char(219) << "  " << char(219) << char(219) << "       " << char(219) << char(219) << "  " << char(219) << char(219) << "        " << char(219) << char(219) << "   " << char(219) << char(219);
	Console::SetCursorPosition(13, 9);
	cout << "     " << char(219) << char(219) << "       " << char(219) << char(219) << "       " << char(219) << char(219) << "  " << char(219) << char(219) << "       " << char(219) << char(219) << "  " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << "     " << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219);
	

	cout << endl;
	cout << endl;
	cout << "                            |1| Ingresar como cliente" << endl;
	cout << "                            |2| Ingresar como vendedor" << endl;                     
	cout << "                                Elija una opcion: ";
	int opcion;
	do
	{
		cin >> opcion;
		if (opcion < 0 || opcion>2)
			cout << "Ingrese una opcion valida... ";
	} while (opcion < 0 || opcion>2);
    return opcion;
}

int main()
{
	while (true)
	{
		system("cls");
		switch (menu_principal())
		{
		default:
			break;
		}
	}
	
	return 0;
}