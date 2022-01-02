#include<iostream>
#include<string>
using namespace std;
int main() {

	//定义一个指针
	int a = 10;
	//创建一个指针
	int * p;
	//指针和别的对象建立关系
	p = &a;
	cout << &a << endl;
	cout << p << endl;

	*p = 1000;
	cout << a << endl;
	cout << *p << endl;

	//指针解引用

	system("pause");
	return 0;
}