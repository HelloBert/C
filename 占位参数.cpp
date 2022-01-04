#include<iostream>
using namespace std;
#include <string>
//有占位参数，必须要传值
//占位参数可以有默认参数
void func(int a, int) {
	cout << "this is func" << endl;
}


int main() {
	func(10, 10);
system("pause");
return 0;
}