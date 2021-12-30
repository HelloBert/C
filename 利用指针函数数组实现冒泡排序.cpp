#include<iostream>
#include<string>
using namespace std;

void bubblesort(int * arr, int len) {
	for (int i = 0; i < (len - 1); i++) {
		for (int j = 0;j<(len-i-1);j++) {
			if (arr[j]>arr[j+1]) {
				int temp = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = temp;

				}
			}
		}
	}

void printArr(int * arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
}

int main() {
	int arr[10] = { 23, 34, 62, 12, 4, 1, 63, 2, 5, 66 };
	int len = sizeof(arr) / sizeof(arr[0]);
	bubblesort(arr, 10);
	printArr(arr, len);

	



	system("pause");
	return 0;
}