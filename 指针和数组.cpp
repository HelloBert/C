#include<iostream>
#include<string>
using namespace std;
int main() {

	//指针和数组
	//利用指针访问数组中的元素

	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "第一个元素" << arr[0] << endl;

	int* p = arr;	//arr就是数组首地址

	cout << "利用指针访问第一个元素" << *p << endl;
	p++;	//指针向后移动了四个字节
	cout << "利用指针访问第二个元素" << *p << endl;

	int* p2 = arr;
	for (int i = 0; i < 10;i++) {
		cout << *p2 << endl;
		*p2++;
	
	}


	system("pause");
	return 0;
}