#pragma once
#undef max

string InputFileName() {
	string nameoffile;
	cout << "     What is the name of the file? ";
	cin >> nameoffile;	
	nameoffile = ("Encrypted_Files//" + nameoffile + ".txt");
	ifstream inputFile;
	inputFile.open(nameoffile);
	if (!inputFile) {
		cout << "\t";
		cout << "The file cannot be open. It does not exist or we don't have permission to open the file!" << endl << "     ";
		exit(1);
	}
	return nameoffile;
}

vector<vector<int>> ReadInverseMatrix(string nameoffile) { // reads the users input 
	vector<vector<int>> inversematrix(3, vector<int>(3));
	ifstream inputFile;
	inputFile.open(nameoffile);
	for (int i = 0; i < 3; i++) // decrypts the file 
		for (int j = 0; j < 3; j++)
			inputFile >> inversematrix[i][j];
	return inversematrix;
}

int ReadSizeofMessage(string nameoffile) { // reads the users input 
	int sizeofmessage;
	ifstream inputFile;
	inputFile.open(nameoffile);
	inputFile.ignore(numeric_limits<streamsize>::max(), '\n');
	inputFile >> sizeofmessage; // gathers size of matrix
	return sizeofmessage;
}

vector<vector<int>> ReadMessage(string nameoffile, int sizeofmessage) { // reads the users input
	vector<vector<int>> encryptedmessage(10000, vector<int>(3));
	ifstream inputFile;
	inputFile.open(nameoffile);
	inputFile.ignore(numeric_limits<streamsize>::max(), '\n');
	inputFile.ignore(numeric_limits<streamsize>::max(), '\n');
	for (int i = 0; i < (sizeofmessage / 3); i++)
		for (int j = 0; j < 3; j++)
			inputFile >> encryptedmessage[i][j];
	return encryptedmessage;
}

void DisplayMessage(vector<vector<int>> product, int sizeofmessage) {
	char ascii;
	cout << "     Decrypted Message: ";
	for (int i = 0; i < sizeofmessage / 3; i++)
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
	string nameoffile = InputFileName();
	vector<vector<int>> inversematrix(3, vector<int>(3));
	int sizeofmessage;
	vector<vector<int>> encryptedmessage(10000, vector<int>(3));
	vector<vector<int>> product(10000, vector<int>(3));

	inversematrix = ReadInverseMatrix(nameoffile);
	sizeofmessage = ReadSizeofMessage(nameoffile);
	encryptedmessage = ReadMessage(nameoffile, sizeofmessage);
	product = MatrixMultiplication (inversematrix, encryptedmessage, sizeofmessage);

	DisplayMessage(product, sizeofmessage);
	return;
}