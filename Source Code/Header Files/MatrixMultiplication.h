#pragma once
vector<vector<int>> MatrixMultiplication(vector<vector<int>> matrix1, vector<vector<int>> matrix2, vector <int> messagevector)//encryption
{
	vector<vector<int>> product(10000, vector<int>(3));
	int sum = 0;
	for (int k = 0; k < (static_cast <int> (messagevector.size()) / 3); k++)
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
				sum += matrix1[i][j] * matrix2[k][j];
			product[k][i] = sum;
			sum = 0;
		}
	return product;
}

vector<vector<int>> MatrixMultiplication(vector<vector<int>> matrix1, vector<vector<int>> matrix2, int sizeofmessage)//decryption
{
	vector<vector<int>> product(10000, vector<int>(3));
	int sum = 0;
	for (int k = 0; k < (sizeofmessage / 3); k++)
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
				sum += matrix1[i][j] * matrix2[k][j];
			product[k][i] = sum;
			sum = 0;
		}
	return product;
}