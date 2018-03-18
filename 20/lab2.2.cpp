#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "Vvedite chislo\n";
	cin >> a;
	if (a % 5 == 0)
		cout << a << endl;
	else
		cout << "Ostatok = " << a % 5 << endl;
	system("pause");
	return 0;
}
