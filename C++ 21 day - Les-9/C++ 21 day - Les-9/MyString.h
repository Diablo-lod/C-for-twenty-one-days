#pragma once
class MyString
{
public:
	MyString(const char* InitialInput);
	//���������� ����� ���� ������ ������ ����
	~MyString();
	//��������� ����������� �����!!! ��� ��������� ����������� ������ � �����������
	MyString(const MyString& CopySource);

	int GetLenght();
	const char* GetString();

private:
	char* Buffer;
};