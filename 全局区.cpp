#include<iostream>
using namespace std;
#include <string>
//ȫ�ֱ���
int g_a = 10;
int g_b = 10;

//ȫ�ֳ���
const int c_g_a = 10;
const int c_g_b = 10;
int main(){
	int a = 10;
	int b = 10;

	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "�ֲ�������ַ" << (int)&a << endl;
	cout << "�ֲ�������ַ" << (int)&b << endl;

	cout << "ȫ�ֱ�����ַ" << (int)&g_a << endl;
	cout << "ȫ�ֱ�����ַ" << (int)&g_b << endl;

	cout << "ȫ�ֳ�����ַ" << (int)&c_g_a << endl;
	cout << "ȫ�ֳ�����ַ" << (int)&c_g_b << endl;

	cout << "�ֲ�������ַ" << (int)&c_l_a << endl;
	cout << "�ֲ�������ַ" << (int)&c_l_b << endl;

	//��̬����,Ҳ�����ȫ������
	static int s_a = 10;

	cout << "��̬����" << (int)&s_a << endl;
	//�ַ�������
	cout << "�ַ��������ĵ�ַ" << (int)&"hello world" << endl;

	

system("pause");
return 0;
}