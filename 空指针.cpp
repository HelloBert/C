#include<iostream>
#include<string>
using namespace std;
int main() {

	//指针指向0叫空指针
	int* p = NULL;


	//空指针不可以进行访问
	//0 ~ 255内存编号是系统占用，因此不可访问
	*p = 100;
	system("pause");
	return 0;
}