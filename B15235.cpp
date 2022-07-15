#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	int* arr = new int[num];
	int* count = new int[num];
	int max = 0;
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
		if (max < arr[i]) max = arr[i];
		count[i] = 0;
	}

	int k = 1;

	for (int i = 0; i < max; i++) {
		for (int j = 0; j < num; j++) {
			if (arr[j] != 0) {
				count[j] = k;
				k++;
				arr[j]--;
			}
		}
	}

	for (int i = 0; i < num; i++) cout << count[i] << " ";

	return 0;
}