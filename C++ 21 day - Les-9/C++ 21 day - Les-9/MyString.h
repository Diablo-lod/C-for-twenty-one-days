#pragma once
class MyString
{
public:
	MyString(const char* InitialInput);
	//���������� ����� ���� ������ ������ ����
	~MyString();

	int GetLenght();
	const char* GetString();

private:
	char* Buffer;
};