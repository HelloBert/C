#include<iostream>
#include<string>
using namespace std;
int main() {

	//ָ�������
	//����ָ����������е�Ԫ��

	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "��һ��Ԫ��" << arr[0] << endl;

	int* p = arr;	//arr���������׵�ַ

	cout << "����ָ����ʵ�һ��Ԫ��" << *p << endl;
	p++;	//ָ������ƶ����ĸ��ֽ�
	cout << "����ָ����ʵڶ���Ԫ��" << *p << endl;

	int* p2 = arr;
	for (int i = 0; i < 10;i++) {
		cout << *p2 << endl;
		*p2++;
	
	}


	system("pause");
	return 0;
}