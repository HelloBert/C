#include<iostream>
using namespace std;
#include <string>
	//ֵ����
void mySwap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;

	//cout << "a = " << a << endl;
}

	//��ַ����
void mySwap02(int * a,int * b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	//cout << "a = " << *a << endl;
}

int& test01() {
	static int a = 100;
	return a;
}

	//���ô���
void mySwap03(int &a,int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 10;
	int b = 20;
	//mySwap01(a, b);	//ֵ���ݣ��ββ�������ʵ��
	//cout << "a = " << a << endl;

	//mySwap02(&a, &b);
	//cout << "a = " << a << endl;

	mySwap03(a, b);		//���ô����β�Ҳ������ʵ��
	cout << "a = " << a << endl;

	int& ref = test01();
	cout << "ref:" <<ref<< endl;
	test01() = 10000;
	cout << "ref:" << ref << endl;

	system("pause");
	return 0;
}