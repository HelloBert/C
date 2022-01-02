#include<iostream>
#include<string>
using namespace std;

//在main函数前声明
//声明可以重复多次，但定义函数只能有一次
int max(int a, int b);

int main() {

	cout << max(10, 20) << endl;


	system("pause");
	return 0;
}

int max(int a, int b) {
	return a > b ? a : b;
}