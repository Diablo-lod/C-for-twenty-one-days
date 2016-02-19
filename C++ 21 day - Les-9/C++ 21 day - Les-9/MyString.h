#pragma once
class MyString
{
public:
	MyString(const char* InitialInput);
	//Деструктор может быть всегда только один
	~MyString();

	int GetLenght();
	const char* GetString();

private:
	char* Buffer;
};