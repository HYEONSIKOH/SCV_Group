#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int num;
	cin >> num;
	int count = 0;
	char* pos = new char[num];

	for (int i = 0; i < num; i++) cin >> pos[i];
	
	for (int i = 0; i < num; i++) {
		if (pos[i] == 'S') count++;
		if (pos[i] == 'L') {
			count++;
			i++;
		}
		if (i == num - 1) count++;
	}

	if (num >= count) cout << count;
	else cout << num;

	delete[] pos;
	return 0;
}