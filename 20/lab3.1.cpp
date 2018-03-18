#include <iostream>
using namespace std;

int main() {
	int i = 0;
	char Str[128];
	cin.getline(Str, 128);
	while (Str[i] != '\0')
	{
		if (Str[i] == ' ')
			Str[i] = '-';
		i++;
	}
	i = 0;
	cout << '-';
	while (Str[i] != '\0')
		cout << Str[i++];
	cout << "-\n";
	system("pause");
	return 0;
}
