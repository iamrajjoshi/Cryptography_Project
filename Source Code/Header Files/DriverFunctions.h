#pragma once

void RunUserInterface()
{
	PlaySound(TEXT("Avengers.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC); // background music
	EncryptionUI();
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
	SetConsoleTextAttribute(hConsole, 15);
	cout << "\t\t\t\t\t\t\t\t\t |\t\t\t             THE CODE MACHINE\t\t                    |" << endl;
	SetConsoleTextAttribute(hConsole, 9);
	cout << "\t\t\t\t\t\t\t\t\t\\*-----------------------------------------------------------------------------------*/" << endl << endl << endl;
	SetConsoleTextAttribute(hConsole, 10);//green
	
	return;
}
string PromptUser()
{
	string entry;
	cout << "     Encode or Decode or Quit (Type the command): ";
	cin >> entry;
	return entry;
}

int UserChoice(string entry)
{
	if (entry == "QUIT" || entry == "q" || entry == "Q" || entry == "quit")
	{
		cout << "     Bye!" << endl << "     ";
		return -1;
	}

	else if (entry == "ENCODE" || entry == "E" || entry == "e" || entry == "encode")
		RunEncrypt();

	else if (entry == "DECODE" || entry == "D" || entry == "d" || entry == "decode")
		RunDecrypt();

	else
		cout << "     Please enter a valid entry..." << endl;

	cout << "     ";
	system("pause");
	return 0 ;
}

