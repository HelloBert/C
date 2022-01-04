#include<iostream>
using namespace std;
#include <string>
//全局变量
int g_a = 10;
int g_b = 10;

//全局常量
const int c_g_a = 10;
const int c_g_b = 10;
int main(){
	int a = 10;
	int b = 10;

	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "局部变量地址" << (int)&a << endl;
	cout << "局部变量地址" << (int)&b << endl;

	cout << "全局变量地址" << (int)&g_a << endl;
	cout << "全局变量地址" << (int)&g_b << endl;

	cout << "全局常量地址" << (int)&c_g_a << endl;
	cout << "全局常量地址" << (int)&c_g_b << endl;

	cout << "局部常量地址" << (int)&c_l_a << endl;
	cout << "局部常量地址" << (int)&c_l_b << endl;

	//静态变量,也会放在全局区中
	static int s_a = 10;

	cout << "静态变量" << (int)&s_a << endl;
	//字符串常量
	cout << "字符串常量的地址" << (int)&"hello world" << endl;

	

system("pause");
return 0;
}