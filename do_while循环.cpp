#include<iostream>
#include<string>
using namespace std;
int main()
{
	//do...while
	//����Ļ�����0��9��10������
	int num = 0;
	do {
		cout << num << endl;
		num++;
	} while (num < 10);


	//ˮ�ɻ�����⣬�ҵ�������λ���е�����ˮ�ɻ���
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