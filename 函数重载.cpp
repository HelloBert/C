#include<iostream>
using namespace std;
#include <string>
//同一作用域内函数有无参数，参数类型不同，参数顺序不同
//不能产生歧义
//注意事项：引用作为重载的条件
//函数重载碰到默认参数
void func() {
	cout << "func被调用" << endl;

}
void func(int a) {
	cout << "func01被调用" << endl;

}
void func01(int &a) {				//int &a = 10不合法
	cout << "func01(int &a)被调用" << endl;

}
void func01(const int& a) {			
	cout << "func01(const int &a)被调用" << endl;

}

int main() {
	func();
	int a = 10;
	func01(a);
	func01(10);
	system("pause");
	return 0;
}