#include<iostream>
#include<string>
using namespace std;
int main() {

	//ָ����ռ�ڴ�ռ�
	//32λ����ϵͳռ4�ֽڣ�64λ����ϵͳռ8�ֽ�
	int a = 10;

	int * p = &a;
	cout << "sizeof(int*) = " << sizeof(int *) << endl;
	cout << "sizeof(float*) = " << sizeof(float *) << endl;
	cout << "sizeof(double*) = " << sizeof(double *) << endl;
	cout << "sizeof(char*) = " << sizeof(char *) << endl;

	system("pause");
	return 0;
}