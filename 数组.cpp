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

	//1.����5ֻС�����ص����飬�ҳ����ֵ

	int arr_num[5] = { 200, 300, 400 ,500, 700 };
	int max = 0;
	
	for (int i = 0; i < 5; i++) {
		if (arr_num[i] > max) {
			max = arr_num[i];
		}
	
	}
	cout << max << endl;


	//����Ԫ����β����
	int arr_number[5] = { 3, 3, 5, 6, 1 };
	for (int i = 0; i < 5; i++) {
		cout << arr_number[i] << endl;;
	}
	int start = 0;	//��ʵԪ���±�
	int end = sizeof(arr_number) / sizeof(arr_number[0]) - 1;
	
	for (int i = 0; i<5; i++)
	{
		int temp = arr_number[start];
		arr_number[start] = arr_number[end];
		arr_number[end] = temp;
		start++;
		end--;
		if (start>end) {
			break;
		}
	}
	for (int i = 0; i < 5; i++) {
		cout << arr_number[i] << endl;
	}






	system("pause");
	return 0;
}