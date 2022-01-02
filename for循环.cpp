#include<iostream>
#include<string>
using namespace std;
int main()
{
	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	
	}

	for (int a = 0; a < 101;a++) {
	
		if (a % 10 == 7 || a / 10 == 7||a % 7 ==0) {
			cout << "敲桌子" << endl;
		
		}
		else {
			cout << a << endl;
		}

	//嵌套循环，打印全是矩阵的星星
	
	}
	string c = "* ";
	
	for (int d = 0; d < 10; d++) {
		cout << endl;
		for (int e = 0; e < 10; e++)
		{
			cout << c ;
		}

	}

	//小九九乘法表
	for (int e = 1; e <= 9;e++) {
		cout << endl;
		for (int f = 1; f <= e;f++) {
			cout << f << "*" << e << "=" << f * e<<"  ";
		}
	
	}




	system("pause");
	return 0;
}