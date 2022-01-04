#include<iostream>
using namespace std;
#include <string>

//如果有个地方已经有默认参数，那么后面的都要有，前面的有没有无所谓
int func(int a, int b = 20, int c = 30) {
	return a + b + c;


}


int main() {
	int a = 20;
	int b = 30;
	cout << func(a, b) << endl;

	system("pause");
	return 0;
}