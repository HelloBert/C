#include<iostream>
using namespace std;
#include <string>

int * func() {
	//利用new关键字 可以将数据开辟到堆区,
	//返回一块内存地址，我们用指针去接收
	//数据保存在堆区，地址保存在栈区，指针指向堆区数据
	int * p = new int(10);
	return p;

}

//new基本语法
int* func1() {
	//在对去创建整型数据
	//new返回的是该数据类型的指针
	int* p = new int(20);
	return p;
}

//在堆区利用new开辟数组
void func2() {
	int *arr = new int[10];
	for (int i = 0; i < 10;i++) {
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	delete[] arr;				//释放数组需要加中括号
}

int main() {

	//在堆区开辟数据
	int* p = func();
	int* k = func1();
	cout << *k << endl;
	delete k;
	//cout << *k << endl;		//内存已经被释放，再次访问会报错
	func2();
	


	cout << *p << endl;
system("pause");
return 0;
}