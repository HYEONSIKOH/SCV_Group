#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	cin >> num;
	int** arr = (int**)malloc(sizeof(int*) * num);
	
	for (int i = 0; i < num; i++) arr[i] = (int*)malloc(sizeof(int)*3);
	
	for (int i = 0; i < num; i++) {
		cin >> arr[i][0];
		cin >> arr[i][1];
		cin >> arr[i][2];
	}

	int* player = new int[num];

	for (int i = 0; i < num; i++) player[i] = 0;

	for (int index = 0; index < 3; index++) {
		for (int i = 0; i < num; i++) {
			for (int j = 0; j < num; j++) {
				if (i != j) {
					if (arr[i][index] == arr[j][index]) {
						i+=1;
						if (i == num) break;
						j = -1;
					}
				}
				
				if (j == num - 1) {
					cout << index+1 <<"번째 게임 ||";
					cout << i+1 << "번째 플레이어가 " << arr[i][index] << '\n';
					player[i] += arr[i][index];
				}
			}
		}
	}

	for (int i = 0; i < num; i++) cout << player[i] << '\n';

	return 0;
}