#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout << "1.XXX" << endl;
	cout << "2.XXX" << endl;
	goto FALG;				//不建议使用，以免造成程序混乱
	cout << "3.XXX" << endl;
	cout << "4.XXX" << endl;
	cout << "5.XXX" << endl;
	FALG:
	cout << "6.XXX" << endl;




	system("pause");
	return 0;
}