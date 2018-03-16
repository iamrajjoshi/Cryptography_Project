#include "../Header Files/Header.h" // all header files are included in Header.h

int main()
{
	PlaySound(TEXT("Mission_Impossible.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC); // background music
	EncryptionUI();
	while (true)
	{
		HANDLE  hConsole;
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		FlushConsoleInputBuffer(hConsole);
		SetConsoleTextAttribute(hConsole, 12);
		cout << "\t\t\t\t\t\t/*----------------------------------------------------------------------------------*\\" << endl;
		SetConsoleTextAttribute(hConsole, 15);
		cout << "\t\t\t\t\t\t |\t\t\t\             THE CODE MACHINE\t\t                    |" << endl;
		SetConsoleTextAttribute(hConsole, 9);
		cout << "\t\t\t\t\t\t\\*-----------------------------------------------------------------------------------*/" << endl << endl << endl;
		SetConsoleTextAttribute(hConsole, 10);//green



		cout << "     Encode or Decode or Quit (Type the command): ";
		cin >> entry;
		if (entry == "QUIT" || entry == "q" || entry == "Q" || entry == "quit")
		{
			cout << "Bye!" << endl;
			break;
		}
		else if (entry == "ENCODE" || entry == "E" || entry == "e" || entry == "encode")
		{
			//encode
			entry2 = 1;
			//Matrix Key is called in Inverse Matrix
			InverseMatrix();
			GetMessage();
			GroupMessage();
			MatrixMulti(key, grouped);
			CreateFile();
			WriteToFile(inverse, product);
			cout << "     ";
			system("pause");
		}
		else if (entry == "DECODE" || entry == "D" || entry == "d" || entry == "decode")
		{
			//decode
			entry2 = 0;
			ReadMessage();
			MatrixMulti(Minverse, Mmessage);
			DisplayMessage();
			cout << "     ";
			system("pause");
		}
		else
		{
			cout << "     Please enter a valid entry." << endl << "     ";
			system("pause");
		}
		system("CLS");
	}
	return 0;
}