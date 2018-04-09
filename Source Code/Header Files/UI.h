#pragma once

void AnimateRocketShip()// Displays rocket
{
	int i = 0;
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //a fancy way to control the output
	FlushConsoleInputBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, 12);
	system("cls");

	for (int j = 5; j >= i; j--)
		cout << endl;
	//displays the rocketship through the power of cut & paste
	cout << "\t\t\t\t\t\t\t\t\t\t\t        +" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t       +++" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t      +++++" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t     +++++++" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t    +++++++++" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t   +++++++++++" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  +++++++++++++" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t +++++++++++++++" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t+++++++++++++++++" << endl;
	SetConsoleTextAttribute(hConsole, 15);//white
	cout << "\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^" << endl;
	SetConsoleTextAttribute(hConsole, 9);//blue
	cout << "\t\t\t\t\t\t\t\t\t\t     ***********************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t     ***********************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t     ***********************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t     ***********************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t*********************************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t*********************************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t*********************************" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t*********************************" << endl;
	SetConsoleTextAttribute(hConsole, 15);

	for (int j = 0; j < 1; j++)
	{
		HANDLE  hConsole;
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		FlushConsoleInputBuffer(hConsole);
		SetConsoleTextAttribute(hConsole, 14);//gold
		for (int i = 0; i < 3; i++) // displays the "fire" effect
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
			cout << "\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
			cout << "\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;
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
	}
	return;
}

void Acronym()		//Displays Acronym of Company
{
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	FlushConsoleInputBuffer(hConsole);

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
		{
			SetConsoleTextAttribute(hConsole, 12);//red
			cout << "G" << endl;
		}
		else if (k == 1)
		{
			SetConsoleTextAttribute(hConsole, 15);//white
			cout << "O" << endl;
		}
		else
		{
			SetConsoleTextAttribute(hConsole, 9);//blue
			cout << "P" << endl;
		}
		Sleep(200);
	}
	for (int i = 0; i < 35; i++)
	{
		cout << endl;
		Sleep(100);
	}
	return;
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
			FlushConsoleInputBuffer(hConsole);
			SetConsoleTextAttribute(hConsole, 12);//red
			cout << "G ";
			Sleep(150);
			SetConsoleTextAttribute(hConsole, 14);//gold
			cout << "O ";
			Sleep(150);
			cout << "D ";
			Sleep(150);
			cout << "S ";
		}
		else if (k == 1)
		{
			HANDLE  hConsole;
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			FlushConsoleInputBuffer(hConsole);
			SetConsoleTextAttribute(hConsole, 15);//white
			cout << "O ";
			Sleep(150);
			SetConsoleTextAttribute(hConsole, 14);//gold
			cout << "F ";
		}
		else
		{
			HANDLE  hConsole;
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			FlushConsoleInputBuffer(hConsole);
			SetConsoleTextAttribute(hConsole, 9);//blue
			cout << "P ";
			Sleep(150);
			SetConsoleTextAttribute(hConsole, 14);//gold
			cout << "R ";
			Sleep(150);
			cout << "O ";
			Sleep(150);
			cout << "G ";
			Sleep(150);
			cout << "R ";
			Sleep(150);
			cout << "A ";
			Sleep(150);
			cout << "M ";
			Sleep(150);
			Sleep(150);
			cout << "M ";
			Sleep(150);
			cout << "I ";
			Sleep(150);
			cout << "N ";
			Sleep(150);
			cout << "G ";
			Sleep(150);
		}
		Sleep(1000);
	}
	return;
}

void Presents()		//Displays "Presents..."
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	FlushConsoleInputBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, 10);//green
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
	return;
}

void TheCodeMachine()//Displays "THE CODE MACHINE"
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	FlushConsoleInputBuffer(hConsole);
	cout << endl;
	for (int j = 0; j < 11; j++)
		cout << "\t";
	for (int i = 0; i < 16; i++)
	{
		switch (i)
		{
		case 0:
		{
			SetConsoleTextAttribute(hConsole, 12);//red
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
			SetConsoleTextAttribute(hConsole, 15);//white
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
			SetConsoleTextAttribute(hConsole, 9);//blue
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
	return;
}

void Intro()	//Displays Intro and User Prompt
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	FlushConsoleInputBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, 14);
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 7; j++)
			cout << "\t";
		if (i == 0)
			cout << "Hello! Welcome to the Code Machine, brought to you by Gods of Programming. " << endl;

		else if (i == 1)
		{
			SetConsoleTextAttribute(hConsole, 12);
			cout << "Using complicated, secret encryption and decryption methods, this program will take " << endl;
		}
		else if (i == 2)
		{
			SetConsoleTextAttribute(hConsole, 15);
			cout << "in your message and convert it to cipher text stored in a file. The program also decrypts " << endl;
		}
		else if (i == 3)
		{
			SetConsoleTextAttribute(hConsole, 9);
			cout << "a message that has been sent to you from a user of The Code Machine. We hope you have a " << endl;
		}
		else
		{
			SetConsoleTextAttribute(hConsole, 14);
			cout << "great experience using this program!";
		}

	}
	Sleep(7000);
	system("CLS");
	system("COLOR 0A");
	return;
}

void EncryptionUI()	//Function that displays all of the UI
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	AnimateRocketShip();
	Acronym();
	CompanyName();
	Presents();
	TheCodeMachine();
	Intro();
	return;
}