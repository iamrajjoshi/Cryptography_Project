#include <vector>
#include <Windows.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>
#include <iostream>       
#include <thread>     
#include <chrono> 
#include<stdlib.h>
#include <fstream>
#include <algorithm>

using namespace std;

#include "FunctionNames.h"
#include "E-D.h"
#include "Encrypt.h"
#include "Decrypt.h"

int main()
{
	while (1)
	{
		cout << "Encode or Decode or Quit (Type the command): ";
		cin >> entry;
		transform(entry.begin(), entry.end(), entry.begin(), toupper);
		if (entry == "QUIT") 
		{
			cout << "Bye!" << endl;
			break;
		}
		else if (entry == "ENCODE") 
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
			system("pause");
		}
		else if (entry == "DECODE") 
		{
			//decode
			entry2 = 0;
			ReadMessage();
			MatrixMulti(Minverse, Mmessage);
			DisplayMessage();
			system("pause");
		}
		else 
		{
			cout << "Please enter a valid entry." << endl;
			system("pause");
		}
		system("CLS");
	}
	system("pause");
}