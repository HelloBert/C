#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout << "��ѡ�񸱱��Ѷ�" << endl;
	cout << "1.��ͨ" << endl;
	cout << "1.�е�" << endl;
	cout << "1.����" << endl;

	int select = 0;
	cin >> select;
	switch (select) {
	case 1:
		cout << "��ͨ" << endl;
		break;
	case 2:
		cout << "��ͨ" << endl;
		break;
	case 3:
		cout << "����" << endl;
	default:
		break;
	
	}
	for (int a = 1; a < 101; a++) {

		if (a % 2 == 0){
			continue;			//contine�����˳�ѭ����break���˳�ѭ��
		}
		cout << a << endl;

	}



	system("pause");
	return 0;
}