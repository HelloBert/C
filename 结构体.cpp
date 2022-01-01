#include<iostream>
#include<string>
using namespace std;

struct hero
{
	string name;
	int age;
	string sex;
};

void allocateSpace(struct hero h1[], int len) {
	string arr1[5] = { "Áõ±¸","¹ØÓğ","ÕÅ·É","ÕÔÔÆ","õõ²õ" };
	int arr2[5] = { 23,22,20,21,19 };
	string arr3[5] = { "ÄĞ","ÄĞ","ÄĞ","ÄĞ","Å®" };
	for (int i = 0; i < len; i++) {
		h1[i].name = arr1[i];
		h1[i].age = arr2[i];
		h1[i].sex = arr3[i];
	}
}

void boublel(struct hero h1[], int len) {
	for (int j = 0; j < len - 1; j++) {
		for (int i = 0; i < len - j - 1; i++) {
			if (h1[i].age > h1[i + 1].age) {
				struct hero temp = h1[i];
				h1[i] = h1[i + 1];
				h1[i + 1] = temp;

			}
		}
	}
}

void printHero(struct hero h1[], int len) {
	for (int i = 0; i < len; i++) {
		cout << h1[i].name << endl;
		cout << h1[i].age << endl;
	}

}
int main() {
	struct hero h1[5];
	int len = sizeof(h1) / sizeof(h1[0]);
	cout << len << endl;
	allocateSpace(h1, len);
	boublel(h1, len);
	printHero(h1, len);

	system("pause");
	return 0;
}