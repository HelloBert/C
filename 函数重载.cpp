#include<iostream>
using namespace std;
#include <string>
//ͬһ�������ں������޲������������Ͳ�ͬ������˳��ͬ
//���ܲ�������
//ע�����������Ϊ���ص�����
//������������Ĭ�ϲ���
void func() {
	cout << "func������" << endl;

}
void func(int a) {
	cout << "func01������" << endl;

}
void func01(int &a) {				//int &a = 10���Ϸ�
	cout << "func01(int &a)������" << endl;

}
void func01(const int& a) {			
	cout << "func01(const int &a)������" << endl;

}

int main() {
	func();
	int a = 10;
	func01(a);
	func01(10);
	system("pause");
	return 0;
}