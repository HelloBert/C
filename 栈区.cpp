#include<iostream>
using namespace std;
#include <string>
int* func() {
	int a = 10;
	return &a;
}

int main() {
	int* p = func();
	//局部变量保存在栈区，如果函数返回栈区的变量，第一次可以使用，
	//第二次就已经释放了,所以局部变量不要返回地址
	cout << *p << endl;
	cout << *p << endl;

system("pause");
return 0;
}