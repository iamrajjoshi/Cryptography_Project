// Encode: Raj
//	Gets Message
vector <int> GetMessage();
vector <int> message2;

//	Generates Matrix Key
vector<vector<int>> MatrixKey();
vector<vector<int>> key(3, vector<int>(3));

//	Finds the Inverse of the Key
vector<vector<int>> InverseMatrix();
vector<vector<int>> inverse(3, vector<int>(3));

//	Groups the Message into x by 3 matrixs
vector<vector<int>> GroupMessage();
vector<vector<int>> grouped(10000, vector<int>(3));

//	Creates the File
void CreateFile();
ofstream cypherFile;
string name;

//	Writes the Inverse Key, Encoded Matrix, and the length of the Encoded Matrix
void WriteToFile(vector<vector<int>> key, vector<vector<int>> encrypted);



// Decode: Andrew
//	Reads the Info from the wanted file
void ReadMessage();
vector<vector<int>> Minverse(3, vector<int>(3));
int Msize;
vector<vector<int>> Mmessage(10000, vector<int>(3));

//	Displays the message
void DisplayMessage();
char ascii;



//Both: Garrett
//	Does Matrix Multi
vector<vector<int>> MatrixMulti(vector<vector<int>> matrix1, vector<vector<int>> matrix2);
vector<vector<int>> product(10000, vector<int>(3));

//	Used to know if it is Encode, Decode or Quit.
string entry;
int entry2;