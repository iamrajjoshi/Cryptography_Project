#pragma once

vector <int> inverseKey(vector <int> key1)
{
	int key[3][3], inversekey[3][3], d = 0;
	vector <int> inverseVector;
	for (int j = 0; j < 3; ++j) 
	{
		for (int h = 0; h < 3; ++h, ++d)
		{
			key[j][h] = key1[d];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			inversekey[j][i] = key[(i + 1) % 3][(j + 1) % 3] *
				key[(i + 2) % 3][(j + 2) % 3] - key[(i + 1) % 3][(j + 2) % 3] *
				key[(i + 2) % 3][(j + 1) % 3];

		}
	}
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			inverseVector.push_back(inversekey[i][j]);
			cout << "ikey" << i << " " << j << " = " << inversekey[i][j] << endl;// Debugging Statement
		}
	}

	return inverseVector;
}
