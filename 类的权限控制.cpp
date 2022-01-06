#include<iostream>
using namespace std;
#include <string>



class Person {
public:
	string m_Name(string m_name) {
		name = m_name;
		return name;
	}

	//获取年龄
	int  get_Age() {
		age = 0;
		return age;
	}
	//设置年龄
	void set_Age(int s_age) {
		if (age>150 ||age<0) {
			cout << "年龄不符合规范" << endl;
		}
		return;
		age = s_age;
	
	}
	//修改情人
	void my_Lover(string Lover) {
		m_Lover = Lover;
	}

private:
	//可读可写
	string name;
	//只读
	int age;
	//只写
	string m_Lover;
};



int main() {

	Person p;
	cout << p.get_Age() << endl;
	p.set_Age(15);
	
	cout << p.m_Name("zhaowenhao") << endl;
	//cout << p.my_Lover("tatata") << endl;


system("pause");
return 0;
}