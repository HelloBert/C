#include<iostream>
#include<string>
using namespace std;
int main()
{
	int num1 = 10;

	short num2 = 10;

	long num3 = 10;

	long long num4 = 10;

	//单精度	float
	float f1 = 3.14f;
	//双精度    double
	double d1 = 3.14;
	//科学计数法
	float f2 = 3e2;

	//char字符类型
	char ch = 'a';
	cout << ch << endl;
	 
	//字符串类型,C风格
	char str1[] = "abcde";
	//C++风格字符串类型
	string str = "abcde";

	//创建bool类型 
	bool flag = true;
	bool flag1 = false;

	int a = 10;
	float b = 3.141f;
	char c = 'a';

	cout << "请给字符型变量重新赋值" << endl;
	cin >> c;
	cout << "c的值" << c << endl;
	cout << "请给浮点型b赋值" << endl;
	cin >> b;
	cout << "请给整型变量a赋值" << endl;
	cin >> a;
	cout << "整型变量a" << a << endl;
	string d = "12fdgd";
	cout << "请重新给字符串b重新赋值" << endl;
	cin >> d;
	cout << d << endl;
	bool e = true;


	cout << "请重新给布尔类型e赋值" << endl;
	cin >> e;
	cout << e << endl;
	cout << flag1 << endl;
	cout << flag << endl;
	cout << "bool类型所占空间" << sizeof(bool) << endl;
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

	//前置递增
	int numa = 10;
	++numa;
	
	//后置递增
	int numb = 10;
	numb++;
	cout << "输出numb" << numb << endl;
	cout << "输出numa" << numa << endl;


	//赋值运算符
	int cc = 10;
	cc = 100;
	cout << "cc的值是" << cc << endl;

	cc += 10;
	cout << "cc的值是" << cc << endl;
	
	cc = 100;
	cc -= 10;
	cout << "cc的值是" << cc << endl;

	cc = 100;
	cc *= 10;
	cout << "cc的值是" << cc << endl;

	cc = 100;
	cc /= 10;
	cout << "cc的值是" << cc << endl;

	cc = 100;
	cc %= 10;
	cout << "cc的值是" << cc << endl;

	int dd = 10;
	int ee = 20;
	cout << (dd == ee) << endl;
	cout << (dd != ee) << endl;

	int ff = 10;
	cout << !ff << endl;


	cout << "hello world\n";
	cout << "char所占字符空间" << sizeof(char) << endl;
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