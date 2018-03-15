void ReadMessage() 
{
	string Mname;
	cout << "     What is the name of the file? ";
	cin >> Mname;
	ifstream inputFile;
	inputFile.open("Encrypted_Files//" + Mname + ".txt");
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			inputFile >> Minverse[i][j];
		}
	}
	inputFile >> Msize;
	for (int i = 0; i < (Msize / 3); i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			inputFile >> Mmessage[i][j];
		}
	}
}

void DisplayMessage() 
{
	cout << "     Your message is: ";
	for (int i = 0; i < Msize / 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			ascii = product[i][j];
			if (ascii == 0)
				break;
			cout << ascii;
		}
	}
	cout << endl;
}
