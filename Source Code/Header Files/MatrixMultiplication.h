vector<vector<int>> MatrixMulti(vector<vector<int>> matrix1, vector<vector<int>> matrix2)
{
	int size;
	if (entry2)
		size = message2.size();
	else
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