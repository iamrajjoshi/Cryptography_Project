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
		cout << "The file cannot be opened. It does not exist or we don't have permission to open the file!" << endl << "     ";
		exit(1);
	}
	return nameoffile;
}

bool CheckforPassword(string nameoffile)
{
	int test;
	ifstream inputFile;
	bool ispass = true;
	inputFile.open(nameoffile);
	inputFile >> test;
	if (test != -1)
		ispass = true;
	else
		ispass = false;
	return ispass;
}

void EnterPassword(string nameoffile)
{
	std::wstring To(nameoffile.begin(), nameoffile.end());
	LPCWSTR Last = To.c_str();
	int count = 0;
	int key;
	ifstream inputFile;
	inputFile.open(nameoffile);
	string pass;
	inputFile >> key;
	inputFile.close();
	inputFile.open(nameoffile);
	inputFile.ignore(numeric_limits<streamsize>::max(), '\n');
	inputFile >> pass;
	cout << "     This file was password encrypted. Please enter the password: ";
START:
	count++;
	if (count > 5)
	{
		DisplayHeader();
		cout << "     You have enter the wrong password too many times! Quitting!..." << endl << "     ";
		SetFileAttributes(Last, FILE_ATTRIBUTE_HIDDEN);
		Sleep(1000);
		exit(1);
	}
	string passAfter = "";
	char ch;
	ch = _getch();
	while (ch != 13 && ch >= 65 || ch == '\b') {//character 13 is enter
		if (ch == '\b' && passAfter != "")
		{
			cout << "\b \b";
			passAfter.pop_back();
		}
		else if(ch != '\b')
		{
			passAfter.push_back(ch);
			cout << '*';
		}
		ch = _getch();
	}
	for (unsigned int i = 0; i < pass.length(); i++)
		pass[i] -= key;
	if (passAfter != pass)
	{
		DisplayHeader();
		cout << endl << "     The password is incorrect. Please enter the correct password: ";
		goto START;
	}
	else
	{
		cout << endl << "     The password is correct!" << endl;
		Sleep(1000); 
		inputFile.close();
		return;
	}
}

vector<vector<int>> ReadInverseMatrix(string nameoffile, bool ispass) { // reads the users input 
	vector<vector<int>> inversematrix(3, vector<int>(3));
	ifstream inputFile;
	inputFile.open(nameoffile);
	if (ispass == true)
	{
		inputFile.ignore(numeric_limits<streamsize>::max(), '\n');
		inputFile.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	for (int i = 0; i < 3; i++) // decrypts the file 
		for (int j = 0; j < 3; j++)
			inputFile >> inversematrix[i][j];
	inputFile.close();
	return inversematrix;
}

int ReadSizeofMessage(string nameoffile, bool ispass) { // reads the users input 
	int sizeofmessage;
	ifstream inputFile;
	inputFile.open(nameoffile);
	inputFile.ignore(numeric_limits<streamsize>::max(), '\n');
	if (ispass == true)
	{
		inputFile.ignore(numeric_limits<streamsize>::max(), '\n');
		inputFile.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	inputFile >> sizeofmessage; // gathers size of matrix
	inputFile.close();
	return sizeofmessage;
}

vector<vector<int>> ReadMessage(string nameoffile, int sizeofmessage, bool ispass) { // reads the users input
	vector<vector<int>> encryptedmessage(10000, vector<int>(3));
	ifstream inputFile;
	inputFile.open(nameoffile);
	inputFile.ignore(numeric_limits<streamsize>::max(), '\n');
	inputFile.ignore(numeric_limits<streamsize>::max(), '\n');
	if (ispass == true)
	{
		inputFile.ignore(numeric_limits<streamsize>::max(), '\n');
		inputFile.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	for (int i = 0; i < (sizeofmessage / 3); i++)
		for (int j = 0; j < 3; j++)
			inputFile >> encryptedmessage[i][j];
	inputFile.close();
	return encryptedmessage;
}

void DisplayMessage(vector<vector<int>> product, int sizeofmessage)
{
	char ascii;
	string message = "";
	Loading("decrypted");
	cout << "\n\n     Decrypted Message: ";
	for (int i = 0; i < sizeofmessage / 3; i++)
		for (int j = 0; j < 3; j++) // displays characters one by one
			if ((ascii = product[i][j]) != 0)
				message += ascii;
	message += '\0';
	slow_print(message, 50);
	cout << endl;
	return;
}

void RunDecrypt()
{
	string nameoffile = InputFileName();
	std::wstring To(nameoffile.begin(), nameoffile.end());
	LPCWSTR Last = To.c_str();
	SetFileAttributes(Last, FILE_ATTRIBUTE_NORMAL);
	bool ispass;
	int sizeofmessage;
	string password;
	vector<vector<int>> inversematrix(3, vector<int>(3));
	vector<vector<int>> encryptedmessage(10000, vector<int>(3));
	vector<vector<int>> product(10000, vector<int>(3));

	ispass = CheckforPassword(nameoffile);

	if (ispass == true)
		EnterPassword(nameoffile);

	inversematrix = ReadInverseMatrix(nameoffile, ispass);
	sizeofmessage = ReadSizeofMessage(nameoffile, ispass);
	encryptedmessage = ReadMessage(nameoffile, sizeofmessage, ispass);
	product = MatrixMultiplication(inversematrix, encryptedmessage, sizeofmessage);

	DisplayMessage(product, sizeofmessage);
	SetFileAttributes(Last, FILE_ATTRIBUTE_HIDDEN);
	return;
}