#include<iostream>
#include<string>
using namespace std;
int main() {

	//指针所占内存空间
	//32位操作系统占4字节，64位操作系统占8字节
	int a = 10;

	int * p = &a;
	cout << "sizeof(int*) = " << sizeof(int *) << endl;
	cout << "sizeof(float*) = " << sizeof(float *) << endl;
	cout << "sizeof(double*) = " << sizeof(double *) << endl;
	cout << "sizeof(char*) = " << sizeof(char *) << endl;

	system("pause");
	return 0;
}