#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	cin >> num;

	int* arr = new int[num];

	for (int i = 0; i < num; i++) cin >> arr[i];
	
	int max = arr[0];
	int index = 0;

	for (int i = 0; i < num; i++) {
		if (max < arr[i]) {
			max = arr[i];
			index = i;
		}
	}
	int sum = 0;

	for (int i = 0; i < num; i++) if (i != index) sum += arr[i];

	cout << sum;

	delete[] arr;
	return 0;
}