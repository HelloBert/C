#include<iostream>
using namespace std;
#include <string>

const double PI = 3.14;

class CirCle {
public:

	int m_r;

	double calculateZC() {
		return 2 * PI * m_r;
	}
};




int main() {
	CirCle a;
	a.m_r = 10;
	cout << a.calculateZC() << endl;
	system("pause");
	return 0;
}