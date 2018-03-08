#pragma once

#define STARS 100


void AnimateRocketShip()// Displays rocket
{
	int i = 0;

	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int col = 9;
	FlushConsoleInputBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, col);
	system("cls");

	for (int j = 25; j >= i; j--)
		cout << endl;

	cout << "\t\t\t\t\t\t\t\t\t\t\t        *" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t       ***" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t      *****" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t     *******" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t    *********" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t   ***********" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  *************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  *************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  *************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  *************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  *************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  *************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  *************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  *************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  *************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  *************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  *************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  *************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t*****************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t*****************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t*****************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t*****************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t*********************************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t*********************************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t*********************************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t*********************************" << endl;
	SetConsoleTextAttribute(hConsole, 15);
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);

	for (int j = 0; j < 1; j++)
	{
		HANDLE  hConsole;
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		int col = 14;
		FlushConsoleInputBuffer(hConsole);
		SetConsoleTextAttribute(hConsole, col);
		for (int i = 0; i < 3; i++)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * *" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t * * * * * * * * * * * * * * * * " << endl;
			Sleep(200);
		}
		for (int i = 0; i < 4; i++)
		{
			cout << "\t\t\t\t\t\t\t\t\t * * * * * * * * * * * * * * * * * * * * * * * * " << endl;
			cout << "\t\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
			Sleep(200);
		}
		for (int i = 0; i < 3; i++)
		{
			cout << "\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
			cout << "\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;
			Sleep(200);
		}
		for (int i = 0; i < 4; i++)
		{
			cout << "\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << " * * * * * * * * * * *" << endl;
			cout << "\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * " << "* * * * * * * * * * * " << endl;
			Sleep(200);
		}
		for (int i = 0; i < 3; i++)
		{
			cout << "\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
			cout << "\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;
			Sleep(200);
		}
		for (int i = 0; i < 2; i++)
		{
			cout << "\t\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * " << endl;
			cout << "\t\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
			Sleep(200);
		}
		for (int i = 0; i < 2; i++)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * *" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * " << endl;
			Sleep(200);
		}
		for (int i = 0; i < 1; i++)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t* * * * * * * * * * * * * * * " << endl;
			Sleep(200);
		}
		cout << endl << endl << endl << endl << endl;
		SetConsoleTextAttribute(hConsole, 15);
	}
}

void Acronym()																		//Displays Acronym of Company
{
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int col = 9;
	FlushConsoleInputBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, col);

	for (int k = 0; k < 3; k++)				//Displays acronym
	{
		for (int i = 0; i < 15; i++)
		{
			cout << endl;
			Sleep(100);
			if (k != 0)
				break;
		}
		for (int j = 0; j < 11; j++)
			cout << "\t";

		if (k == 0)
			cout << "R" << endl;
		else if (k == 1)
			cout << "A" << endl;
		else
			cout << "J" << endl;
		Sleep(200);
	}
	for (int i = 0; i < 18; i++)
	{
		cout << endl;
		Sleep(100);
	}
	SetConsoleTextAttribute(hConsole, 15);
}

void CompanyName()													//Company Name
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	system("cls");
	for (int k = 0; k < 3; k++)
	{
		for (int i = 0; i < 16; i++)
		{
			cout << endl;
			if (k != 0)
				break;
		}

		for (int j = 0; j < 11; j++)
		{
			cout << "\t";
		}

		if (k == 0)
		{
			HANDLE  hConsole;
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			int col = 11;
			FlushConsoleInputBuffer(hConsole);
			SetConsoleTextAttribute(hConsole, col);
			cout << "R";
			Sleep(150);
			SetConsoleTextAttribute(hConsole, 9);
			cout << "a";
			Sleep(150);
			cout << "j";
			/*	Sleep(150);
				cout << "t";
				Sleep(150);
				cout << "t";
				Sleep(150);
				cout << "y" << endl;
				Sleep(150);*/
		}
		else if (k == 1)
		{
			HANDLE  hConsole;
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			int col = 11;
			FlushConsoleInputBuffer(hConsole);
			SetConsoleTextAttribute(hConsole, col);
			cout << "G";
			Sleep(150);
			SetConsoleTextAttribute(hConsole, 9);
			cout << "G";
			Sleep(150);
			cout << "O";
			Sleep(150);
			cout << "A";
			Sleep(150);
			cout << "T";
			Sleep(150);
			/*cout << "u";
			Sleep(150);
			cout << "l" << endl;
			Sleep(150);*/
		}
		else
		{
			HANDLE  hConsole;
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			int col = 11;
			FlushConsoleInputBuffer(hConsole);
			SetConsoleTextAttribute(hConsole, col);
			cout << "F";
			Sleep(150);
			SetConsoleTextAttribute(hConsole, 9);
			cout << "l";
			Sleep(150);
			cout << "a";
			Sleep(150);
			cout << "s";
			Sleep(150);
			cout << "h";
			Sleep(150);
		}
		Sleep(1000);
	}
}

void Presents()															//Displays "Presents..."
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int col = 2;
	FlushConsoleInputBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, col);
	for (int i = 0; i < 2; i++)
		cout << endl;
	for (int j = 0; j < 10; j++)
		cout << "\t";
	for (int i = 0; i < 11; i++)
	{
		if (i == 0)
			cout << "P";
		if (i == 1)
			cout << "r";
		if (i == 2 || i == 4)
			cout << "e";
		if (i == 3 || i == 7)
			cout << "s";
		if (i == 5)
			cout << "n";
		if (i == 6)
			cout << "t";
		if (i == 8 || i == 9)
			cout << ".";
		if (i == 10)
			cout << "." << endl;
		Sleep(150);
	}
}

void TheCodeMachine()//Displays "THE CODE MACHINE"
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int col = 2;
	FlushConsoleInputBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, col);
	cout << endl;
	for (int j = 0; j < 11; j++)
		cout << "\t";
	for (int i = 0; i < 16; i++)
	{
		switch (i)
		{
		case 0:
		{
			cout << "T";
			break;
		}
		case 1:
		{
			cout << "H";
			break;
		}
		case 2:
		{
			cout << "E";
			break;
		}
		case 3:
		{
			cout << " ";
			break;
		}
		case 4:
		{
			cout << "C";
			break;
		}
		case 5:
		{
			cout << "O";
			break;
		}
		case 6:
		{
			cout << "D";
			break;
		}
		case 7:
		{
			cout << "E";
			break;
		}
		case 8:
		{
			cout << " ";
			break;
		}
		case 9:
		{
			cout << "M";
			break;
		}
		case 10:
		{
			cout << "A";
			break;
		}
		case 11:
		{
			cout << "C";
			break;
		}
		case 12:
		{
			cout << "H";
			break;
		}
		case 13:
		{
			cout << "I";
			break;
		}
		case 14:
		{
			cout << "N";
			break;
		}
		case 15:
		{
			cout << "E" << endl;
			break;
		}
		}
		Sleep(150);
	}
}

void Intro()//Displays Intro and User Prompt
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int col = 15;
	FlushConsoleInputBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, 2);
	char enter;
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			cout << "\t";
		if (i == 0)
			cout << "Hello! Welcome to the Code Machine, brought to you by Pretty Helpful Developers. " << endl;

		else if (i == 1)
			cout << "Using complicated, secret encryption and decryption methods, this program will take " << endl;
		else if (i == 2)
			cout << "in your message and convert it to cipher text stored in a file. The program also decrypts " << endl;
		else if (i == 3)
			cout << "a message that has been sent to you from a user of The Code Machine. We hope you have a " << endl;
		else
			cout << "great experience using this program!" << endl;
	}
	Sleep(7000);
	system("CLS");
	system("COLOR 0A");
}

void EncryptionUI()	//Entire UI
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	AnimateRocketShip();
	Acronym();
	CompanyName();
	Presents();
	TheCodeMachine();
	Intro();
}