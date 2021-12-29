#include<iostream>
#include<string>
using namespace std;

void exchange(int num1, int num2) {


	int temp = num1;
	num1 = num2;
	num2 = temp;


}

int main() {
	cout << "交换前" << endl;
	int a = 10;
	int b = 20;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	exchange(a, b);
	cout << "交换后" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	

	system("pause");
	return 0;
}