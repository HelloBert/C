#include<iostream>
using namespace std;
#include <string>

//����и��ط��Ѿ���Ĭ�ϲ�������ô����Ķ�Ҫ�У�ǰ�����û������ν
int func(int a, int b = 20, int c = 30) {
	return a + b + c;


}


int main() {
	int a = 20;
	int b = 30;
	cout << func(a, b) << endl;

	system("pause");
	return 0;
}