#include<iostream>
#include<string>
using namespace std;
int main()
{
	//数组特点：放在一块连续的内存空间中
	//数组中每个元素都是相同数据类型
	//数组下标是从零开始

	int arr[5];
	//数组中的元素给赋值
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	//第二种定义数组方式
	//如果数组定义了五个数，后面的两个没有给赋值，那么会默认添加零
	int arr2[5] = { 10, 20, 30, 40, 50 };
	cout << arr2[3] << endl;
	//利用循环的方式输出数组
	for (int i = 0; i < 5;i++) {
		cout << arr[i] << endl;
	}


	//第三种定义数组方式
	int arr3[] = { 10,20,30,40,50 };
	cout << arr3[1] << endl;

	cout << arr[1] << endl;


	//数组的用途
	//统计整个数组在内存中的长度
	cout << sizeof(arr2) << endl;
	//数组元素的个数
	cout << sizeof(arr2) / sizeof(arr2[0]) << endl;

	//可以获取数组在内存中的首地址
	cout <<  (int)arr2 << endl;

	//查看一个元素首地址
	cout << (int)& arr[0] << endl;

	//数组名是一个常量，不可以进行赋值操作
	system("pause");
	return 0;
}