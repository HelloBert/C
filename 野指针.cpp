#include<iostream>
#include<string>
using namespace std;
int main() {

	//野指针
	int* p = (int*)0x1100;
	//空指针和野指针都不是我们能申请的权限，因此不要访问

	

	system("pause");
	return 0;
}