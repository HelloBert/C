#include<iostream>
using namespace std;
#include <string>
	//值传递
void mySwap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;

	//cout << "a = " << a << endl;
}

	//地址传递
void mySwap02(int * a,int * b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	//cout << "a = " << *a << endl;
}

int& test01() {
	static int a = 100;
	return a;
}

	//引用传递
void mySwap03(int &a,int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 10;
	int b = 20;
	//mySwap01(a, b);	//值传递，形参不会修饰实参
	//cout << "a = " << a << endl;

	//mySwap02(&a, &b);
	//cout << "a = " << a << endl;

	mySwap03(a, b);		//引用传递形参也会修饰实参
	cout << "a = " << a << endl;

	int& ref = test01();
	cout << "ref:" <<ref<< endl;
	test01() = 10000;
	cout << "ref:" << ref << endl;

	system("pause");
	return 0;
}