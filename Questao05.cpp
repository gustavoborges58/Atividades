#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	vector<vector<int>> matrix1;
	vector<int> matrix2;
	vector<int> resultado;
	int valueM1 = 0, valueM2 = 0, valueRES = 0;

	for (int i = 0; i < 3; i++)
	{
	    vector<int> linha;
		for (int j = 0; j < 3; j++)
		{
		    cout << "Matrix1[" << i+1 << "][" << j+1 << "]: " << endl;
            cin >> valueM1;
            linha.push_back(valueM1);
		}
        matrix1.push_back(linha);

		cout << "Matrix2[" << i+1 << "][" << 0 << "]: " << endl;
		cin >> valueM2;
		matrix2.push_back(valueM2);
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
		    valueRES += matrix1[i][j]*matrix2[j];
			cout << matrix1[i][j] << " " << matrix2[j] << endl;
 		}
		resultado.push_back(valueRES);
		valueRES = 0;
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "resultado[ " << i << "]: " << resultado[i] << endl;
	}

	return 0;
}
