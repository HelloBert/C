#include<iostream>
using namespace std;
#include <string>
//��ռλ����������Ҫ��ֵ
//ռλ����������Ĭ�ϲ���
void func(int a, int) {
	cout << "this is func" << endl;
}


int main() {
	func(10, 10);
system("pause");
return 0;
}