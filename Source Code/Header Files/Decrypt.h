#pragma once

string NameofFile()
{
	string Mname;
	cout << "     What is the name of the file? ";
	cin >> Mname;	
	Mname = ("Encrypted_Files//" + Mname + ".txt");

	return Mname;
}
vector<vector<int>> ReadInverseMatrix(string Mname) // reads the users input 
{
	vector<vector<int>> Minverse(3, vector<int>(3));
	ifstream inputFile;
	inputFile.open(Mname);
	for (int i = 0; i < 3; i++) // decrypts the file 
		for (int j = 0; j < 3; j++)
			inputFile >> Minverse[i][j];
	return Minverse;
}
int ReadSizeofMessage(string Mname) // reads the users input 
{
	int Msize;
	ifstream inputFile;
	inputFile.open(Mname);
	inputFile.ignore(1000000, '\n');
	inputFile >> Msize; // gathers size of matrix
	return Msize;
}
vector<vector<int>> ReadMessage(string Mname, int Msize) // reads the users input 
{
	vector<vector<int>> Mmessage(10000, vector<int>(3));
	ifstream inputFile;
	inputFile.open(Mname);
	inputFile.ignore(1000000, '\n');
	inputFile.ignore(1000000, '\n');
	for (int i = 0; i < (Msize / 3); i++)
		for (int j = 0; j < 3; j++)
			inputFile >> Mmessage[i][j];
	return Mmessage;
}

void DisplayMessage(vector<vector<int>> product, int Msize)
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
	string Mname = NameofFile();
	//decode
	//entry2 = 0;
	vector<vector<int>> Minverse(3, vector<int>(3));
	int Msize;
	vector<vector<int>> Mmessage(10000, vector<int>(3));

	Minverse = ReadInverseMatrix(Mname);
	Msize = ReadSizeofMessage(Mname);
	Mmessage = ReadMessage(Mname, Msize);

	vector<vector<int>> product(10000, vector<int>(3));
	product = MatrixMulti(Minverse, Mmessage, Msize);
	DisplayMessage(product, Msize);
	return;
}
