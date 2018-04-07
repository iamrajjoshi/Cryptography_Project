#pragma once


vector <int> getMessage() // receives the user's message
{
	vector <int> messagevector;
	cout << "     Please enter your message: ";
	string message;
	messagevector.clear();
	int a;
	cin.ignore();
	getline(cin, message);
	for (unsigned int i = 0; i < message.size(); ++i)
	{
		a = message[i];
		messagevector.push_back(a);
	}
	int extra;
	int k = 0;
	switch (messagevector.size() % 3)
	{
	case 0:
		extra = 0;
		break;
	case 1:
		extra = 2;
		break;
	case 2:
		extra = 1;
		break;
	}
	for (; extra > 0; --extra)
		messagevector.push_back(0);
	return messagevector;
}

vector<vector<int>> GroupMessage(vector <int> messagevector) // Checks how many characters are left over; groups them back
{
	vector<vector<int>> grouped(10000, vector<int>(3));
	int k = 0;
	for (unsigned int i = 0; i < messagevector.size() / 3; i++)
		for (int j = 0; j < 3; j++, k++)
			grouped[i][j] = messagevector[k];
	return grouped;
}

vector<vector<int>> MatrixKey() // generates a random key 
{
	vector<vector<int>> key(3, vector<int>(3));
	srand(static_cast <unsigned int>(time(0)));
	int n = 1 + rand() % 100;
	key[0][0] = 8 * n * n + 8 * n;
	key[0][1] = 2 * n + 1;
	key[0][2] = 4 * n;
	key[1][0] = 4 * n*n + 4 * n;
	key[1][1] = n + 1;
	key[1][2] = 2 * n + 1;
	key[2][0] = 4 * n*n + 4 * n + 1;
	key[2][1] = n;
	key[2][2] = 2 * n - 1;
	return key;
}

vector<vector<int>> InverseMatrix(vector<vector<int>> key)
{
	vector<vector<int>> inverse(3, vector<int>(3));
	//MatrixKey();
	int determinant = 0;
	for (int i = 0; i < 3; i++)
		determinant = determinant + (key[0][i] * (key[1][(i + 1) % 3] * key[2][(i + 2) % 3] - key[1][(i + 2) % 3] * key[2][(i + 1) % 3]));
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			inverse[j][i] = ((key[(j + 1) % 3][(i + 1) % 3] * key[(j + 2) % 3][(i + 2) % 3]) -
			(key[(j + 1) % 3][(i + 2) % 3] * key[(j + 2) % 3][(i + 1) % 3]))
			/ determinant;
	return inverse;
}

 string createFile() //a function to create a file
{
	 ofstream cypherFile;
	 string name;
	cout << "     Please enter the name of the file you want to save the message in [Don't add extention .txt] : ";
	cin >> name;
	if (!fs::exists("Encrypted_Files"))// Check if source folder exists
		fs::create_directory("Encrypted_Files"); // create source folder
	name = "Encrypted_Files//" + name + ".txt";
	cypherFile.open(name);
	cypherFile.close();
	cout << "     Your message has been encrypted and saved in a text file. It is located in the \"Encrypted_Files\" folder..." << endl;
	return name;
}

void WriteToFile(string name, vector<vector<int>> key, vector<vector<int>> encrypted, vector <int> messagevector) // a function that copies the encrypted message to the file
{
	ofstream cypherFile;
	cypherFile.open(name);
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cypherFile << key[j][i] << " "; // types in the key
	cypherFile << endl << messagevector.size() << endl;
	for (unsigned int i = 0; i < (messagevector.size() / 3); i++)
		for (int j = 0; j < 3; j++)
			cypherFile << encrypted[i][j] << " "; // types in the encrypted message
	cypherFile.close();
}

void RunEncrypt()
{
	//entry2 = 1;
	//Matrix Key is called in Inverse Matrix
	vector <int> messagevector;
	vector<vector<int>> key(3, vector<int>(3));
	key = MatrixKey();
	
	messagevector = getMessage();
	
	vector<vector<int>> product(10000, vector<int>(3));
	product = MatrixMulti(key, GroupMessage(messagevector), messagevector);
	WriteToFile(createFile(), InverseMatrix(key), product, messagevector);
	return;
}
