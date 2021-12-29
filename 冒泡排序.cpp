#include<iostream>
#include<string>
using namespace std;
int main() {
	int arr[10] = { 4,2,8,31,33,6,754,12,11,1 };

	cout << "ÅÅĞòÇ°" << endl;
	for (int i = 0; i < 10;i++) {
		cout << arr[i] << " ";
	
	}
	cout << endl;

	cout << "¿ªÊ¼ÅÅĞò" << endl;

	for (int i = 0; i < 9; i++) {
		for(int j = 0; j<9-i;j++)
			if (arr[j]>arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
	}
	cout << "ÅÅĞòºó" << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";

	}



	system("pause");
	return 0;
}