#include<iostream>
using namespace std;
#include <string>

int * func() {
	//����new�ؼ��� ���Խ����ݿ��ٵ�����,
	//����һ���ڴ��ַ��������ָ��ȥ����
	//���ݱ����ڶ�������ַ������ջ����ָ��ָ���������
	int * p = new int(10);
	return p;

}

//new�����﷨
int* func1() {
	//�ڶ�ȥ������������
	//new���ص��Ǹ��������͵�ָ��
	int* p = new int(20);
	return p;
}

//�ڶ�������new��������
void func2() {
	int *arr = new int[10];
	for (int i = 0; i < 10;i++) {
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	delete[] arr;				//�ͷ�������Ҫ��������
}

int main() {

	//�ڶ�����������
	int* p = func();
	int* k = func1();
	cout << *k << endl;
	delete k;
	//cout << *k << endl;		//�ڴ��Ѿ����ͷţ��ٴη��ʻᱨ��
	func2();
	


	cout << *p << endl;
system("pause");
return 0;
}