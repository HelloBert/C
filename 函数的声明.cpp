#include<iostream>
#include<string>
using namespace std;

//��main����ǰ����
//���������ظ���Σ������庯��ֻ����һ��
int max(int a, int b);

int main() {

	cout << max(10, 20) << endl;


	system("pause");
	return 0;
}

int max(int a, int b) {
	return a > b ? a : b;
}