#include<iostream>
#include<string>
using namespace std;

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout <<"swap a = " << a << endl;
	cout << "swap b = " << b << endl;
}

void swap02(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}


int main() {
	//ָ��ͺ���
	//1.ֵ����
	int a = 10;
	int b = 20;
	//swap(a, b);
	//cout << a << endl;
	//cout << b << endl;

	//��ַ����
	//��ַ���ݿ�������ʵ��

	swap02(&a, &b);
	cout << "swap a = " << a << endl;
	cout << "swap b = " << b << endl;


	system("pause");
	return 0;
}