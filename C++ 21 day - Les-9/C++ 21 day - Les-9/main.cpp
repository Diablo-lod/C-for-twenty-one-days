#include "Human.h"
#include <iostream>
#include "MyString.h"

using namespace std;

void UseMyString(MyString Input)
{
	cout << "String buffer in MyString: " << Input.GetLenght() << endl;
	cout << "Buffer contains: " << Input.GetString() << endl;
}

int main()
{
//���������� � ������� Human
	Human FirstMan;
	FirstMan.SetName("Adam");
	FirstMan.SetAge(30);

	Human FirstWoman("Eve");
	FirstWoman.SetAge(28);
		
	Human FirstChild("Rose", 1);
	
	FirstMan.IntroduceSelf();
	FirstWoman.IntroduceSelf();
	FirstChild.IntroduceSelf();

//���������� � ������� MyClass
	MyString SayHello("Hello from String Class");

	cout << "String bufer: " << SayHello.GetLenght() << endl;
	cout << "Buffer  contains:  "  <<  SayHello.GetString()  << endl;

//��������� ������� ������������� ��������� ����� ������ ���������. ����������
//	��-�� ����, ��� �� ������ SayHello �������� � �������, � �� ���������� ������
//	������� ������ ����� ������ ���������. �� �� ���������� ���������� ���� ���������
//	�� �� ��� ��� �������!!! � �� ��� ��� - ��� � ������ - ������������� �����������!!!
//	����� ��� �������� �������� ������������
//	***************************
//	UseMyString(SayHello);
//	***************************

//����� ���������� ������������ ����� ��������� ��� ��� ����������� �������
	UseMyString(SayHello);

	system("pause");
	return 0;
}