#include<iostream>
#include<string>
using namespace std;
int main() {

	//����һ��ָ��
	int a = 10;
	//����һ��ָ��
	int * p;
	//ָ��ͱ�Ķ�������ϵ
	p = &a;
	cout << &a << endl;
	cout << p << endl;

	*p = 1000;
	cout << a << endl;
	cout << *p << endl;

	//ָ�������

	system("pause");
	return 0;
}