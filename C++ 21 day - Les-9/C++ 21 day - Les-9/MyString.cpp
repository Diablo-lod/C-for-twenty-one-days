//Отключаем предупреждение об ошибке о старом коде
//Подключается в том файле, где возникает, в мейне не поможет
#pragma warning(disable : 4996)

#include "MyString.h"
#include <iostream>

using namespace std;

//Описываем конструктор для класса MyString
MyString::MyString(const char* InitialInput)
{
	//если передали не нулевой параметр, то создаем динамический массив чаров
	if (InitialInput != NULL)
	{
		//strlen - определяем длину строки
		Buffer = new char[strlen(InitialInput) + 1];
		//копируем строку в буфер
		strcpy(Buffer, InitialInput);
	}
	else
		Buffer = NULL;
}

//Опишем деструктор для освобождения памяти, зарезервированной в конструкторе
MyString::~MyString()
{
	cout << "Invoking destructor, clearing up" << endl;
	//если буфер не пустой, то освобождаем память из под динамического массива
	if (Buffer != NULL)
	{
		delete[] Buffer;
	}
}

//Узнаем длинну строки
int MyString::GetLenght()
{
	return strlen(Buffer);
}
//Передаем всю строку
const char* MyString::GetString()
{
	return Buffer;
}