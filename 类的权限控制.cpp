#include<iostream>
using namespace std;
#include <string>



class Person {
public:
	string m_Name(string m_name) {
		name = m_name;
		return name;
	}

	//��ȡ����
	int  get_Age() {
		age = 0;
		return age;
	}
	//��������
	void set_Age(int s_age) {
		if (age>150 ||age<0) {
			cout << "���䲻���Ϲ淶" << endl;
		}
		return;
		age = s_age;
	
	}
	//�޸�����
	void my_Lover(string Lover) {
		m_Lover = Lover;
	}

private:
	//�ɶ���д
	string name;
	//ֻ��
	int age;
	//ֻд
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