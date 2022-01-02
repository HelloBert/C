//- ��װ������ʾ�ý��� ��void showMenu()
//- ��װmain�����е��÷�װ�õĺ���
#include<iostream>
using namespace std;
#include <string>
#define MAX 1000
//�����ϵ�˵Ľṹ��
struct Person
{
	//����
	string m_Name;
	//�Ա�
	int m_Sex;
	//����
	int m_Age;
	//�绰
	int Phone;
	//��ͥסַ
	string m_Addr;
};



//���ͨѶ¼�Ľṹ��
struct Addressbooks {
	//ͨѶ¼�б�����ϵ�˵�����
	struct Person personArray[MAX];
	//ͨѶ¼�е�ǰ��¼��ϵ�˵ĸ���
	int m_Size;

};

//�����ϵ��
void addPerson(Addressbooks*abs) 
{
	//�ж�ͨѶ¼�Ƿ�����,��������Ͳ������
	if (abs->m_Size==MAX) {
		cout << "ͨѶ¼�������޷����" << endl;
	}
	else {
		//��Ӿ�����ϵ��

		//�������
		string name;
		cout << "����������: " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//����Ա�
		cout << "������Ա�: " << endl;
		cout << "1.---��" << endl;
		cout << "2.---Ů" << endl;
		int sex = 0;

		//�������1����2,�����Ƴ�ѭ�����������������������
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) 
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "��������,����������" << endl;  
		}
		//�������
		int age = 0;
		cout << "����������: " << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		//��ӵ绰
		int phone;
		cout << "������绰: " << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].Phone = phone;

		//���סַ
		string addr;
		cout << "�������ַ: " << endl;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr;

		//����ͨѶ¼����
		abs->m_Size += 1;

		cout << "������ӳɹ�" << endl;
		system("pause");	//�밴���������
		system("cls");		//����
	}

}



//2.��ʾ������ϵ��
void showPerson(Addressbooks*abs) {
	//�ж�ͨѶ¼�����Ƿ�Ϊ�㣬���Ϊ����ʾ��¼Ϊ�գ�
	//�����Ϊ�㣬��ʾ��ϵ����Ϣ
	if (abs->m_Size == 0) {
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size;i++) {
			cout << "������ " << abs->personArray[i].m_Name <<"\t";
			cout << "���䣺 " << abs->personArray[i].m_Age << "\t";
			cout << "�Ա�" <<(abs->personArray[i].m_Sex ==1?"��":"Ů") << "\t";
			cout << "��ַ��" << abs->personArray[i].m_Addr << "\t";
			cout << "�绰��" << abs->personArray[i].Phone << endl;;
		
		}
		
	}
	system("pause");
	system("cls");
}

//�����ϵ���Ƿ����,������ڷ�����ϵ�������о���λ�ã������ڷ���-1
//����1		ͨѶ¼		����2	�Ա�����
int isExist(Addressbooks* abs, string name) {
	for (int i = 0; i < abs->m_Size;i++) {
		if (abs->personArray[i].m_Name == name){
			return i;
		}
	}
	return -1;
}

//ɾ��ָ����ϵ��
void deletePerson(Addressbooks*abs) {
	cout << "��������Ҫɾ������ϵ��:" << endl;
	string name;
	cin >> name;
	//ret == -1δ�鵽
	//ret != -1�鵽��
	int ret = isExist(abs, name);
	if (ret != -1) {
		//���ҵ�����ˣ�Ҫ����ɾ������
		for (int i = ret; i < abs->m_Size;i++) {
			//����ǰ��
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;		//����ͨѶ¼�е���Ա��
		cout << "ɾ���ɹ�" << endl;
	}
	else {
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
//4.����ָ����ϵ��
void findPerson(Addressbooks*abs) {
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;

	//�ж���ϵ���Ƿ���ͨѶ¼��
	int ret = isExist(abs, name);
	if (ret != -1) {
		cout<<"����: " <<abs->personArray[ret].m_Name << "\t";
		cout << "����: " << abs->personArray[ret].m_Age << "\t";
		cout << "��ַ: " << abs->personArray[ret].m_Addr << "\t";
		cout << "�绰: " << abs->personArray[ret].Phone << "\t";
	}
	else 
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls"); 
}

void modifyPerson(Addressbooks* abs) {
	cout << "������Ҫ�޸ĵ�����" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//�޸�����
		string name;
		cout << "������Ҫ�޸ĵ�����" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		//�޸��Ա�
		while (true) {
			cout << "������Ҫ�޸ĵ��Ա�" << endl;
			int sex = 0;
			cout << "1.---��" << endl;
			cout << "2.---Ů" << endl;
			cin >> sex;
			if (sex == 1 || sex == 0) {
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			else
			{
				cout << "��������,����������" << endl;
			}
			abs->personArray[ret].m_Name = name;
		}
		//�޸�����
		int age = 0;
		cout << "������Ҫ�޸ĵ�����" << endl;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		//�޸ĵ�ַ
		string addr;
		cout << "������Ҫ�޸ĵĵ�ַ" << endl;
		cin >> addr;
		abs->personArray[ret].m_Addr = addr;

		//�޸ĵ绰
		int phone = 0;
		cout << "������Ҫ�޸ĵĵ绰" << endl;
		cin >> phone;
		abs->personArray[ret].Phone = phone;
	}
	else 
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

void cleanPerson(Addressbooks* abs) {
	cout << "�Ƿ����ͨѶ¼?" << endl;
	cout << "0--���" << endl;
	cout << "1--�����" << endl;
	int sure = 0;
	cin >> sure;
	if (sure==0) {
		abs->m_Size = 0;
		cout << "ͨѶ¼�����" << endl;
	}

	system("pause");
	system("cls");
}


//�˵�����
void showMenu()
{
	cout << "**************************" << endl;
	cout << "*****  1.�����ϵ��  *****" << endl;
	cout << "*****  2.��ʾ��ϵ��  *****" << endl;
	cout << "*****  3.ɾ����ϵ��  *****" << endl;
	cout << "*****  4.������ϵ��  *****" << endl;
	cout << "*****  5.�޸���ϵ��  *****" << endl; 
	cout << "*****  6.�����ϵ��  *****" << endl;
	cout << "**************************" << endl;

}


int main() 
{
	int select = 0;	//�����û�ѡ������ı���

	//����ͨѶ¼�ṹ�����
	Addressbooks abs;

	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;

	while (true)
	{

		showMenu();
		cin >> select;

		switch (select)
		{
		case 1:		//1.�����ϵ��
			addPerson(&abs);		//���õ�ַ���ݿ�������ʵ��
			break;	
		case 2:		//2.��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3:		//3.ɾ����ϵ��
			/*cout << "��������ϵ������:" << endl;
			string name;
			cin >> name;
			if (isExist(&abs, name) == -1) {
				cout << "���޴���" << endl;
			}
			else {
				cout << "�ҵ�����" << endl;
			}*/
			deletePerson(&abs);
			break;
		case 4:		//4.������ϵ�� 
			findPerson(&abs);
			break; 
		case 5:		//5.�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6:		//6.�����ϵ��
			cleanPerson(&abs);
			break;
		case 0:
			cout << "��ӭ�´�ʹ��" << endl;
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