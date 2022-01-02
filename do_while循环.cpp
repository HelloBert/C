#include<iostream>
#include<string>
using namespace std;
int main()
{
	//do...while
	//在屏幕中输出0到9这10个数字
	int num = 0;
	do {
		cout << num << endl;
		num++;
	} while (num < 10);


	//水仙花数求解，找到所有三位数中的所有水仙花数
	int number = 100;

	int a = 0;
	int b = 0;
	int c = 0;
	
	while (number < 1000)
	{
		

		a = number % 10;
		b = (number / 10) % 10;
		c = number / 100;
		if (a*a*a+b*b*b+c*c*c == number)
		{
			cout << number << endl;
		}

		number++;
	}




	system("pause");
	return 0;
}