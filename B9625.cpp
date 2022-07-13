#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	int a = 1;
	int b = 0;

	int ac;
	int bc;

	for (int i = 0; i < num; i++) {
		ac = a; bc = b;

		while (ac != 0) {
			a--;
			b++;
			ac--;
		}

		while (bc != 0) {
			a++;
			bc--;
		}
	}

	cout << a << " ";
	cout << b;

	return 0;
}