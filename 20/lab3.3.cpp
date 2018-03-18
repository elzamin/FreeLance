#include <iostream>
using namespace std;

int main() {
	int A[8][12], B[8][12], C[8][12];
	for (int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 12; j++)
		{
		A[i][j] = rand() % 36 - 10;
		B[i][j] = rand() % 36 - 10;
		}
	}
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if (A[i][j] < B[i][j])
				C[i][j] = A[i][j];
			else
				C[i][j] = B[i][j];
		}
	}
	for (int i = 0; i < 8; i++)
	{
		cout << endl;
		for (int j = 0; j < 12; j++)
		{
			cout << A[i][j] << ' ';
		}
	}
	cout << endl << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << endl;
		for (int j = 0; j < 12; j++)
		{
			cout << B[i][j] << ' ';
		}
	}
	cout << endl << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << endl;
		for (int j = 0; j < 12; j++)
		{
			cout << C[i][j] << ' ';
		}
	}
	cout << endl;
	system("pause");
	return 0;
}
