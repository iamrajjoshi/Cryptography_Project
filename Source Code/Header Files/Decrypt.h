#pragma once


void ReadMessage() // reads the users input 
{
	string Mname;
	cout << "     What is the name of the file? ";
	cin >> Mname;
	ifstream inputFile;
	inputFile.open("Encrypted_Files//" + Mname + ".txt");
	for (int i = 0; i < 3; i++) // decrypts the file 
		for (int j = 0; j < 3; j++)
			inputFile >> Minverse[i][j];
	inputFile >> Msize; // gathers size of matrix
	for (int i = 0; i < (Msize / 3); i++)
		for (int j = 0; j < 3; j++)
			inputFile >> Mmessage[i][j];
}

void DisplayMessage(vector<vector<int>> product)
{
	char ascii;
	cout << "     Your message is: ";
	for (int i = 0; i < Msize / 3; i++)
		for (int j = 0; j < 3; j++) // displays characters one by one
		{
			ascii = product[i][j];
			if (ascii == 0) // breaks at the 'enter' character
				break;
			cout << ascii;
		}
	cout << endl;
}

void RunDecrypt()
{
	//decode
	//entry2 = 0;
	ReadMessage();
	vector<vector<int>> product(10000, vector<int>(3));
	product = MatrixMulti(Minverse, Mmessage);
	DisplayMessage(product);
	return;
}
