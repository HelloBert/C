#include<iostream>
#include<string>
using namespace std;
int main()
{
	int num1 = 10;

	short num2 = 10;

	long num3 = 10;

	long long num4 = 10;

	//������	float
	float f1 = 3.14f;
	//˫����    double
	double d1 = 3.14;
	//��ѧ������
	float f2 = 3e2;

	//char�ַ�����
	char ch = 'a';
	cout << ch << endl;
	 
	//�ַ�������,C���
	char str1[] = "abcde";
	//C++����ַ�������
	string str = "abcde";

	//����bool���� 
	bool flag = true;
	bool flag1 = false;

	int a = 10;
	float b = 3.141f;
	char c = 'a';

	cout << "����ַ��ͱ������¸�ֵ" << endl;
	cin >> c;
	cout << "c��ֵ" << c << endl;
	cout << "���������b��ֵ" << endl;
	cin >> b;
	cout << "������ͱ���a��ֵ" << endl;
	cin >> a;
	cout << "���ͱ���a" << a << endl;
	string d = "12fdgd";
	cout << "�����¸��ַ���b���¸�ֵ" << endl;
	cin >> d;
	cout << d << endl;
	bool e = true;


	cout << "�����¸���������e��ֵ" << endl;
	cin >> e;
	cout << e << endl;
	cout << flag1 << endl;
	cout << flag << endl;
	cout << "bool������ռ�ռ�" << sizeof(bool) << endl;
	cout << str << endl;
	cout << str1 << endl;
	cout << f2 << endl;
	cout << f1 << endl;
	cout << d1 << endl;

	int a1 = 10;
	int b1 = 20;
	


	cout << a1 + b1 << endl;
	cout << b1 - a1 << endl;
	cout << a1 * b1 << endl;
	cout << b1 / a1 << endl;

	//ǰ�õ���
	int numa = 10;
	++numa;
	
	//���õ���
	int numb = 10;
	numb++;
	cout << "���numb" << numb << endl;
	cout << "���numa" << numa << endl;


	//��ֵ�����
	int cc = 10;
	cc = 100;
	cout << "cc��ֵ��" << cc << endl;

	cc += 10;
	cout << "cc��ֵ��" << cc << endl;
	
	cc = 100;
	cc -= 10;
	cout << "cc��ֵ��" << cc << endl;

	cc = 100;
	cc *= 10;
	cout << "cc��ֵ��" << cc << endl;

	cc = 100;
	cc /= 10;
	cout << "cc��ֵ��" << cc << endl;

	cc = 100;
	cc %= 10;
	cout << "cc��ֵ��" << cc << endl;

	int dd = 10;
	int ee = 20;
	cout << (dd == ee) << endl;
	cout << (dd != ee) << endl;

	int ff = 10;
	cout << !ff << endl;


	cout << "hello world\n";
	cout << "char��ռ�ַ��ռ�" << sizeof(char) << endl;
	cout << "dubbo = " << sizeof(double) << endl;
	cout << "num4 = " << sizeof(long long) << endl;
	cout << "num4 = " << sizeof(long) << endl;
	cout << "num4 = " << sizeof(int) << endl;
	cout << "num4 = " << sizeof(short) << endl;
	cout << "num4 = " << sizeof(short) << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;
	cout << "hello world" << endl;
	system("pause");
	return 0;  
}