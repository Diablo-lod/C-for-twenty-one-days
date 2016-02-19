//��������� �������������� �� ������ � ������ ����
//������������ � ��� �����, ��� ���������, � ����� �� �������
#pragma warning(disable : 4996)

#include "MyString.h"
#include <iostream>

using namespace std;

//��������� ����������� ��� ������ MyString
MyString::MyString(const char* InitialInput)
{
	//���� �������� �� ������� ��������, �� ������� ������������ ������ �����
	if (InitialInput != NULL)
	{
		//strlen - ���������� ����� ������
		Buffer = new char[strlen(InitialInput) + 1];
		//�������� ������ � �����
		strcpy(Buffer, InitialInput);
	}
	else
		Buffer = NULL;
}

//������ ���������� ��� ������������ ������, ����������������� � ������������
MyString::~MyString()
{
	cout << "Invoking destructor, clearing up" << endl;
	//���� ����� �� ������, �� ����������� ������ �� ��� ������������� �������
	if (Buffer != NULL)
	{
		delete[] Buffer;
	}
}

//������ ������ ������
int MyString::GetLenght()
{
	return strlen(Buffer);
}
//�������� ��� ������
const char* MyString::GetString()
{
	return Buffer;
}