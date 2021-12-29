#include "swap.h"



//函数的定义
void swap(int a, int b) {
	int temp = b;
	b = a;
	a = temp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}