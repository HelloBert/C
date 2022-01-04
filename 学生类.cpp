#include<iostream>
using namespace std;
#include <string>

class Student {
public:
	
	string name;
	int number;

	string Input_Name() {
		return name;
	}
	int Input_number() {
		return number;
	}

	void setName(string set_name) {
		name = set_name;
	}
};


int main() {
	Student a;
	a.name = "zhaowenhao";
	a.number = 1;
	a.setName("zhaochenggong");
	cout << "姓名:" << a.Input_Name() << endl;
	cout << "姓名:" << a.Input_number() << endl;


	Student a1;
	a1.name = "kongxue";
	a1.number = 2;
	cout << "姓名:" << a1.Input_Name() << endl;
	cout << "姓名:" << a1.Input_number() << endl;



	system("pause");
	return 0;
}