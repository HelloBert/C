#include<iostream>
#include<string>
using namespace std;
int main() {

	//����������ѧ���ɼ�֮��
	int scores[3][3] =
	{
		{89,99,100},
		{87,89,71},
		{99,100,91}
	};

	string names[3] = { "����","����","����" };
	
	
	for (int i = 0; i < 3;i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += scores[i][j];

		}
		cout << names[i] << "�ĳɼ���" << sum << endl;
	}




	system("pause");
	return 0;
}