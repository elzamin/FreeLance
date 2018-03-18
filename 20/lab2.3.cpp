#include <iostream>
using namespace std;

int main() {
	float x;
	cout << "Vvedite x\n\nx = ";
	cin >> x;
	cout << "y = " << (float)(2 * x*x*x*x - 4 * x*x*x + 9 * x*x - 4 * x + 2) / ((x*x + 1)*(x*x + 1)) << endl;
	for (int i = 0; i <= 10; i++)
	{
		x = 2 + 0.1 * i;
		cout << "\nx = " << x;
		cout << "\ny = " << (float)(2 * x*x*x*x - 4 * x*x*x + 9 * x*x - 4 * x + 2) / ((x*x + 1)*(x*x + 1)) << endl;
	}
	system("pause");
	return 0;
}
