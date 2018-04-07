vector<vector<int>> MatrixMulti(vector<vector<int>> matrix1, vector<vector<int>> matrix2, vector <int> message2)
{
	vector<vector<int>> product(10000, vector<int>(3));
	int size = message2.size();
	int sum = 0;
	for (int k = 0; k < (size / 3); k++)
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
				sum += matrix1[i][j] * matrix2[k][j];
			product[k][i] = sum;
			sum = 0;
		}
	return product;
}

vector<vector<int>> MatrixMulti(vector<vector<int>> matrix1, vector<vector<int>> matrix2, int Msize)
{
	vector<vector<int>> product(10000, vector<int>(3));
	int size;
	size = Msize;
	int sum = 0;
	for (int k = 0; k < (size / 3); k++)
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
				sum += matrix1[i][j] * matrix2[k][j];
			product[k][i] = sum;
			sum = 0;
		}
	return product;
}