#include<iostream>
#include<string>
using namespace std;
int main()
{
	//�����ص㣺����һ���������ڴ�ռ���
	//������ÿ��Ԫ�ض�����ͬ��������
	//�����±��Ǵ��㿪ʼ

	int arr[5];
	//�����е�Ԫ�ظ���ֵ
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	//�ڶ��ֶ������鷽ʽ
	//������鶨��������������������û�и���ֵ����ô��Ĭ�������
	int arr2[5] = { 10, 20, 30, 40, 50 };
	cout << arr2[3] << endl;
	//����ѭ���ķ�ʽ�������
	for (int i = 0; i < 5;i++) {
		cout << arr[i] << endl;
	}


	//�����ֶ������鷽ʽ
	int arr3[] = { 10,20,30,40,50 };
	cout << arr3[1] << endl;

	cout << arr[1] << endl;


	//�������;
	//ͳ�������������ڴ��еĳ���
	cout << sizeof(arr2) << endl;
	//����Ԫ�صĸ���
	cout << sizeof(arr2) / sizeof(arr2[0]) << endl;

	//���Ի�ȡ�������ڴ��е��׵�ַ
	cout <<  (int)arr2 << endl;

	//�鿴һ��Ԫ���׵�ַ
	cout << (int)& arr[0] << endl;

	//��������һ�������������Խ��и�ֵ����
	system("pause");
	return 0;
}