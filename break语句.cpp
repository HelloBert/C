#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout << "请选择副本难度" << endl;
	cout << "1.普通" << endl;
	cout << "1.中等" << endl;
	cout << "1.困难" << endl;

	int select = 0;
	cin >> select;
	switch (select) {
	case 1:
		cout << "普通" << endl;
		break;
	case 2:
		cout << "普通" << endl;
		break;
	case 3:
		cout << "困难" << endl;
	default:
		break;
	
	}
	for (int a = 1; a < 101; a++) {

		if (a % 2 == 0){
			continue;			//contine不会退出循环，break会退出循环
		}
		cout << a << endl;

	}



	system("pause");
	return 0;
}