//- 封装函数显示该界面 如void showMenu()
//- 封装main函数中调用封装好的函数
#include<iostream>
using namespace std;
#include <string>
#define MAX 1000
//设计联系人的结构体
struct Person
{
	//姓名
	string m_Name;
	//性别
	int m_Sex;
	//年龄
	int m_Age;
	//电话
	int Phone;
	//家庭住址
	string m_Addr;
};



//设计通讯录的结构体
struct Addressbooks {
	//通讯录中保存联系人的数组
	struct Person personArray[MAX];
	//通讯录中当前记录联系人的个数
	int m_Size;

};

//添加联系人
void addPerson(Addressbooks*abs) 
{
	//判断通讯录是否已满,如果已满就不再添加
	if (abs->m_Size==MAX) {
		cout << "通讯录已满，无法添加" << endl;
	}
	else {
		//添加具体联系人

		//添加姓名
		string name;
		cout << "请输入姓名: " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//添加性别
		cout << "请添加性别: " << endl;
		cout << "1.---男" << endl;
		cout << "2.---女" << endl;
		int sex = 0;

		//如果输入1或者2,可以推出循环，输入其他的则继续输入
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) 
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误,请重新输入" << endl;  
		}
		//添加年龄
		int age = 0;
		cout << "请输入年龄: " << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		//添加电话
		int phone;
		cout << "请输入电话: " << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].Phone = phone;

		//添加住址
		string addr;
		cout << "请输入地址: " << endl;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr;

		//更新通讯录人数
		abs->m_Size += 1;

		cout << "您已添加成功" << endl;
		system("pause");	//请按任意键继续
		system("cls");		//清屏
	}

}



//2.显示所有联系人
void showPerson(Addressbooks*abs) {
	//判断通讯录人数是否为零，如果为零显示记录为空，
	//如果不为零，显示联系人信息
	if (abs->m_Size == 0) {
		cout << "当前记录为空" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size;i++) {
			cout << "姓名： " << abs->personArray[i].m_Name <<"\t";
			cout << "年龄： " << abs->personArray[i].m_Age << "\t";
			cout << "性别：" <<(abs->personArray[i].m_Sex ==1?"男":"女") << "\t";
			cout << "地址：" << abs->personArray[i].m_Addr << "\t";
			cout << "电话：" << abs->personArray[i].Phone << endl;;
		
		}
		
	}
	system("pause");
	system("cls");
}

//检测联系人是否存在,如果存在返回联系人数组中具体位置，不存在返回-1
//参数1		通讯录		参数2	对比姓名
int isExist(Addressbooks* abs, string name) {
	for (int i = 0; i < abs->m_Size;i++) {
		if (abs->personArray[i].m_Name == name){
			return i;
		}
	}
	return -1;
}

//删除指定联系人
void deletePerson(Addressbooks*abs) {
	cout << "请输入您要删除的联系人:" << endl;
	string name;
	cin >> name;
	//ret == -1未查到
	//ret != -1查到了
	int ret = isExist(abs, name);
	if (ret != -1) {
		//查找到这个人，要进行删除操作
		for (int i = ret; i < abs->m_Size;i++) {
			//数据前移
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;		//更新通讯录中的人员数
		cout << "删除成功" << endl;
	}
	else {
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
//4.查找指定联系人
void findPerson(Addressbooks*abs) {
	cout << "请输入您要查找的联系人" << endl;
	string name;
	cin >> name;

	//判断联系人是否在通讯录中
	int ret = isExist(abs, name);
	if (ret != -1) {
		cout<<"姓名: " <<abs->personArray[ret].m_Name << "\t";
		cout << "年龄: " << abs->personArray[ret].m_Age << "\t";
		cout << "地址: " << abs->personArray[ret].m_Addr << "\t";
		cout << "电话: " << abs->personArray[ret].Phone << "\t";
	}
	else 
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls"); 
}

void modifyPerson(Addressbooks* abs) {
	cout << "请输入要修改的名称" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//修改姓名
		string name;
		cout << "请输入要修改的名称" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		//修改性别
		while (true) {
			cout << "请输入要修改的性别" << endl;
			int sex = 0;
			cout << "1.---男" << endl;
			cout << "2.---女" << endl;
			cin >> sex;
			if (sex == 1 || sex == 0) {
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			else
			{
				cout << "输入有误,请重新输入" << endl;
			}
			abs->personArray[ret].m_Name = name;
		}
		//修改年龄
		int age = 0;
		cout << "请输入要修改的年龄" << endl;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		//修改地址
		string addr;
		cout << "请输入要修改的地址" << endl;
		cin >> addr;
		abs->personArray[ret].m_Addr = addr;

		//修改电话
		int phone = 0;
		cout << "请输入要修改的电话" << endl;
		cin >> phone;
		abs->personArray[ret].Phone = phone;
	}
	else 
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

void cleanPerson(Addressbooks* abs) {
	cout << "是否清空通讯录?" << endl;
	cout << "0--清空" << endl;
	cout << "1--不清空" << endl;
	int sure = 0;
	cin >> sure;
	if (sure==0) {
		abs->m_Size = 0;
		cout << "通讯录已清空" << endl;
	}

	system("pause");
	system("cls");
}


//菜单界面
void showMenu()
{
	cout << "**************************" << endl;
	cout << "*****  1.添加联系人  *****" << endl;
	cout << "*****  2.显示联系人  *****" << endl;
	cout << "*****  3.删除联系人  *****" << endl;
	cout << "*****  4.查找联系人  *****" << endl;
	cout << "*****  5.修改联系人  *****" << endl; 
	cout << "*****  6.清空联系人  *****" << endl;
	cout << "**************************" << endl;

}


int main() 
{
	int select = 0;	//创建用户选择输入的变量

	//创建通讯录结构体变量
	Addressbooks abs;

	//初始换通讯录中当前人员个数
	abs.m_Size = 0;

	while (true)
	{

		showMenu();
		cin >> select;

		switch (select)
		{
		case 1:		//1.添加联系人
			addPerson(&abs);		//利用地址传递可以修饰实参
			break;	
		case 2:		//2.显示联系人
			showPerson(&abs);
			break;
		case 3:		//3.删除联系人
			/*cout << "请输入联系人姓名:" << endl;
			string name;
			cin >> name;
			if (isExist(&abs, name) == -1) {
				cout << "查无此人" << endl;
			}
			else {
				cout << "找到此人" << endl;
			}*/
			deletePerson(&abs);
			break;
		case 4:		//4.查找联系人 
			findPerson(&abs);
			break; 
		case 5:		//5.修改联系人
			modifyPerson(&abs);
			break;
		case 6:		//6.清空联系人
			cleanPerson(&abs);
			break;
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
}


	system("pause");
	return 0;
}