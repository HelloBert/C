#include<iostream>
using namespace std;
#include <string>
int* func() {
	int a = 10;
	return &a;
}

int main() {
	int* p = func();
	//�ֲ�����������ջ���������������ջ���ı�������һ�ο���ʹ�ã�
	//�ڶ��ξ��Ѿ��ͷ���,���Ծֲ�������Ҫ���ص�ַ
	cout << *p << endl;
	cout << *p << endl;

system("pause");
return 0;
}