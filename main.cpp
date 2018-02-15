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

using namespace std;

#include "FunctionNames.h"
#include "key.h"
#include "InverseKey.h"

int main() 
{
	vector <int> keyVector = key();
	inverseKey(keyVector);
	return 0;
}
