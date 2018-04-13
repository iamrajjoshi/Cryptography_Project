#pragma once

void slow_print(const string& message, int time)
{
	// Range loops are "for each" constructs; here: for each character in the string
	for (const char c : message)
	{
		// flush is used to make sure the buffer is emptied to the terminal immediately
		cout << c << flush;
		// Ask the thread to sleep for at least n millis.
		Sleep(time);
	}
}

int Modulus(int iN, int iMod) 
{
	int iQ = (iN / iMod);
	return iN - (iQ*iMod);
}

char GetChar(int iGenerator, char cBase, int iRange) {
	return (cBase + Modulus(iGenerator, iRange));
}

int MatrixEffect()
{
	// Color code
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 12);

	char caRow[80];
	int j = 7;
	int k = 2;
	int l = 5;
	int m = 1;
	for(int count = 0; count <350; count++)
	{
		int i = 0;
		// Output a random row of characters
		while (i <80) 
		{
			if (caRow[i] != ' ') 
			{
				caRow[i] = GetChar(j + i * i, 33, 30);
				if (((i*i + k) % 71) == 0) 
				{
					SetConsoleTextAttribute(hConsole, 7);
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 12);
				}
			}
			std::cout << caRow[i];
			++i;
			SetConsoleTextAttribute(hConsole, 12);
		}
		j = (j + 31);
		k = (k + 17);
		l = (l + 47);
		m = (m + 67);
		caRow[Modulus(j, 80)] = '-';
		caRow[Modulus(k, 80)] = ' ';
		caRow[Modulus(l, 80)] = '-';
		caRow[Modulus(m, 80)] = ' ';
		// Delay
		Sleep(3);
	}
	SetConsoleTextAttribute(hConsole, 10);
	Sleep(2000);
	return 0;
}

void SecureConnection()
{
	slow_print("GOP_SECURE_SYSTEMS_v3.2654.2\n", 100);
	Sleep(3000);
	slow_print("Scanning Hardrive for threats...", 100);
	Sleep(4000);
	slow_print("\nScan Complete - No Threats Discovered...\nPreparing to establish secure connection...", 60);
	slow_print("\nSpoofing IP Address...", 50);
	Sleep(2000);
	MatrixEffect();
	system("cls");
	cout << "GOP_SECURE_SYSTEMS_v3.2654.2\nSpoofing IP Address...";
	Sleep(1000);
	slow_print("COMPLETED", 100);
	slow_print("\nSpoofing MAC Address...", 50);
	Sleep(2000);
	MatrixEffect();
	system("cls");
	cout << "GOP_SECURE_SYSTEMS_v3.2654.2\nSpoofing IP Address...COMPLETED\nSpoofing MAC Address...";
	Sleep(1000);
	slow_print("COMPLETED", 100);
	slow_print("\nWARNING: LEVEL 5 Authorization Needed", 100);
	Sleep(2500);
	slow_print(" - Permission Granted", 100);
	Sleep(3000);
	system("CLS");
	system("COLOR 0A");
	return;
}

void DisplayHeader()
{
	system("CLS");
	HANDLE  hConsole; //color changing and text
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	FlushConsoleInputBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, 12);
	cout << "\t\t\t\t\t\t\t\t\t/*----------------------------------------------------------------------------------*\\" << endl;
	SetConsoleTextAttribute(hConsole, 14);
	cout << "\t\t\t\t\t\t\t\t\t |\t\t\t           THE CODE MACHINE\t\t                     |" << endl;
	SetConsoleTextAttribute(hConsole, 15);
	cout << "\t\t\t\t\t\t\t\t\t |\t\t\t                  GOP\t\t                             |" << endl;
	SetConsoleTextAttribute(hConsole, 14);
	cout << "\t\t\t\t\t\t\t\t\t |\t\t\t       By: Raj, Garrett, Andrew\t\t                     |" << endl;
	SetConsoleTextAttribute(hConsole, 9);
	cout << "\t\t\t\t\t\t\t\t\t\\*-----------------------------------------------------------------------------------*/" << endl << endl << endl;
	SetConsoleTextAttribute(hConsole, 10);//green
	return;
}

void Loading(string message)
{
	DisplayHeader();
	cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tYour message is being "<< message << "...\n\n";
	char a = 177, b = 219;
	cout << "\t\t\t\t\t\t\t\t\t\t\t";
	for (int i = 0; i <= 50; i++)
		cout << a;
	cout << "\r";
	cout << "\t\t\t\t\t\t\t\t\t\t\t";
	for (int i = 0; i <= 50; i++)
	{
		cout << b;
		for (int j = 0; j <= 100000000; j++); //You can also use sleep function instead of for loop
	}
	return;
}


void AnimateRocketShip()// Displays rocket
{
	int i = 0;
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //a fancy way to control the output
	FlushConsoleInputBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, 12);
	system("cls");

	for (int j = 20; j >= i; j--)
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
		{
			string message = "Hello! Welcome to the Code Machine, brought to you by Gods of Programming.\n";
				slow_print(message, 30 );
		}
			
		else if (i == 1)
		{
			SetConsoleTextAttribute(hConsole, 12);
			string message = "Using complicated, secret encryption and decryption methods, this program will take \n";
			slow_print(message,30);
		}
		else if (i == 2)
		{
			SetConsoleTextAttribute(hConsole, 15);
			string message = "in your message and convert it to cipher text stored in a file. The program also decrypts \n";
			slow_print(message, 30);
		}
		else if (i == 3)
		{
			SetConsoleTextAttribute(hConsole, 9);
			string message = "a message that has been sent to you from a user of The Code Machine. We hope you have a  \n";
			slow_print(message, 30);
		}
		else
		{
			SetConsoleTextAttribute(hConsole, 14);
			string message = "great experience using this program!";
			slow_print(message, 30);
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
	SecureConnection();
	return;
}