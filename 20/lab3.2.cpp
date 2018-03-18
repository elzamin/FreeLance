#include <iostream>
using namespace std;

int main() {
	float A[65], B[65], min = -30.0, max = 47.5;
	for (int i = 0; i < 65; i++)
		A[i] = (float)rand() / (RAND_MAX + 1) * (max - min) + min;
	for (int i = 0; i < 65; i++)
	{
		B[i] = 0;
		if (A[i] > 25.8 && A[i] < 34.7)
		{
			B[i] = A[i];
			A[i] = 0;
		}
		cout << (float)A[i] << ' ';
	}
	cout << endl << endl;
	for (int i = 0; i < 65; i++)
		cout << (float)B[i] << ' ';
	cout << endl;
	system("pause");
	return 0;
