//��������� �������������� �� ������ � ������ ����
//������������ � ��� �����, ��� ���������, � ����� �� �������
#pragma warning(disable : 4996)

#include "MyString.h"
#include <iostream>

using namespace std;

//��������� ����������� ��� ������ MyString
MyString::MyString(const char* InitialInput)
{
	cout <<  "Constructor:  creating new MyString"  << endl;
	//���� �������� �� ������� ��������, �� ������� ������������ ������ �����
	if (InitialInput != NULL)
	{
		//strlen - ���������� ����� ������
		Buffer = new char[strlen(InitialInput) + 1];
		//�������� ������ � �����
		strcpy(Buffer, InitialInput);
		// ����������� ������ ������� ������ ���������� ������
		cout <<  "Buffer points  to:  Ox"  << hex;
		cout << (unsigned int*)Buffer << endl;
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

//������ ����������� �����
//��� � ������������ ����� ����� ����� �� ������� � ������������.
//��������  ����  ��  ��  �  ��������  �����  ������  �  �����  �, �������
//����������  �  ������  ���������, ��������������� ����������
//������  �  �����������  ����������
MyString::MyString(const MyString& CopySource)//����� ���������� �� ������ ��������!!!
{
	cout <<  "Copy constructor:  copying from MyString"  << endl;
	if (CopySource.Buffer != NULL)
	{
		//  �������������  �������� �����������,  ������ �������
		//  ����������� �����
		Buffer = new char[strlen(CopySource.Buffer) + 1];
		//  ����������� �� ��������� � ��������� �����
		strcpy(Buffer, CopySource.Buffer);
		// ����������� ������ ������� ������ ���������� ������
		cout <<  "Buffer points  to:  Ox"  << hex;
		cout << (unsigned int*)Buffer << endl;
	}
	else
		Buffer = NULL;
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