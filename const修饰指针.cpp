#include<iostream>
#include<string>
using namespace std;
int main() {
	//1.const����ָ��	����ָ��
	int a = 10;
	int b = 10;
	const int* p = &a;
	//ָ��ָ���ֵ�����Ըģ�ָ���ָ����Ը�
	//*p = 20; ����
	p = &b;	//��ȷ
	
	//2.const���γ���	ָ�볣��
	//ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը�
	int* const p2 = &a;
	*p2 = 30;	//��ȷ
	//p2 = &a;	����


	//3.const����ָ��ͳ���
	const int* const p3 = &a;
	//ָ���ָ���ָ��ָ���ֵ���������޸�
	


	system("pause");
	return 0;
}