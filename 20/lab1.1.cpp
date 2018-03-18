#include <iostream>
using namespace std;

int main() {
	int N, M, K;
	cout << "Vvedite chislo N\n";
	cin >> N;
	cout << "Vvedite chislo M\n";
	cin >> M;
	cout << "Vvedite chislo K\n";
	cin >> K;
	cout << (M % N) + (N % K) + (K % M) << endl;
	system("pause");
	return 0;
}
