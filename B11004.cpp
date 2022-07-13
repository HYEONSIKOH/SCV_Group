#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	cin >> num;

	int n;
	cin >> n;

	vector<int> arr;

	int k;

	for (int i = 0; i < num; i++) {
		cin >> k;
		arr.push_back(k);
	}

	sort(arr.begin(), arr.end());

	cout << arr[n-1];

	return 0;
}