#pragma once
class MyString
{
public:
	MyString(const char* InitialInput);
	//Деструктор может быть всегда только один
	~MyString();
	//Определим КОНСТРУКТОР КОПИЙ!!! для глубокого копирования класса с указателями
	MyString(const MyString& CopySource);

	int GetLenght();
	const char* GetString();

private:
	char* Buffer;
};