#include<iostream>
using namespace std;
#include <string>





class Cube {

public:
	int Area(int a_long,int a_wide,int a_high) {
		int area = 2 * (a_long * a_high) + 2 * (a_long * a_wide) + 2 * (a_wide * a_high);
		return area;
	}

	int Volume(int a_long, int a_wide, int a_high){  
		int volume = a_long * a_wide * a_high;
		return volume;
	}


/*
private:
	int c_long;
	int c_wide;
	int c_high;

	*/



};



int main() {
	Cube c01;
	int area01 = c01.Area(1, 2, 3);
	int volue01 = c01.Volume(1, 2, 3);
	
	Cube c02;
	int area02 = c02.Area(1, 2, 3);
	int volue02 = c02.Volume(1, 2, 3);

	if (c01.Area(1, 2, 3) == c02.Area(1, 2, 3)) {
		cout << "面积相等" << endl;
	}

	system("pause");
	return 0;
}