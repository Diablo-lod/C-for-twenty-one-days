#include "Human.h"
//��������� ���������� �������, ��������� � ������������ ����� ��� ������

//*********�� �������� ������� �������������� ������� � ������********

//�������� ���� ������������. ��������� ����� ��� ������������� ����������!!!
Human::Human()
{
	Age = 0;//������ ��������� ���������� ��������
	//������� ��������� ������ � �������� ������������, ����� ����� ����� �� ��������
	cout << "Constructed an instance of class Human" << endl;
}
//������ ����� ������������� �����������
Human::Human(string HumanName)
{
	Name = HumanName;
	Age = 0;//������ ��������� ���������� ��������
	//������� ��������� ������ � �������� ������������, ����� ����� ����� �� ��������
	cout << "Overloaded constructor creates " << Name << endl;
}
//������ ����� ��� ���� ������������� ����������� � ���������
Human::Human(string HumanName, int HumanAge)
{
	Name = HumanName;
	Age = HumanAge;
	cout << "Overloaded constructor creates ";
	cout << Name << " of " << Age << " years" << endl;
}

//��������� ����������, ������� �������� ��� ����������� ������!!!
Human::~Human()
{

}


void Human::SetName(string HumansName)
{
	Name = HumansName;
}

void Human::SetAge(int HumansAge)
{
	Age = HumansAge;
}

//��� ������� ��������� ������� ���������, �� ������ � �� ������� �� ����� ���-��
//������ � ��������� ��������
int Human::GetAge()
{
	if ( Age > 30)
	{
		return (Age - 2);
	}
	else return (Age);
}

void Human::IntroduceSelf()
{
	cout << "I am " << Name << " and am ";
	cout << Age << " year old" << endl;
}