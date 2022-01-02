#include<iostream>
#include<string>
using namespace std;

int add(int sum1, int sum2)
{
	int sum = sum1 + sum2;
	return sum;

}
int main() {

	cout << add(10,20) << endl;

	system("pause");
	return 0;
}