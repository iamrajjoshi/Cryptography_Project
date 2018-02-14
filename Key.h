#pragma once

vector<int> key()
{
	int key[3][3];
	vector <int> keyVector;
	srand(time(NULL));
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
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			keyVector.push_back(key[i][j]);
			cout << "key" << i << " " << j << " = " << key[i][j] << endl;// Debugging Statement
		}
	}
	return keyVector;
}

