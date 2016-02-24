//Отключаем предупреждение об ошибке о старом коде
//Подключается в том файле, где возникает, в мейне не поможет
#pragma warning(disable : 4996)

#include "MyString.h"
#include <iostream>

using namespace std;

//Описываем конструктор для класса MyString
MyString::MyString(const char* InitialInput)
{
	cout <<  "Constructor:  creating new MyString"  << endl;
	//если передали не нулевой параметр, то создаем динамический массив чаров
	if (InitialInput != NULL)
	{
		//strlen - определяем длину строки
		Buffer = new char[strlen(InitialInput) + 1];
		//копируем строку в буфер
		strcpy(Buffer, InitialInput);
		// Отображение адреса области памяти локального буфера
		cout <<  "Buffer points  to:  Ox"  << hex;
		cout << (unsigned int*)Buffer << endl;
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

//Опишем конструктор копий
//Код в конструкторе копий очень похож на таковой в конструкторе.
//Основная  идея  та  же  —  выяснить  длину  строки  в  стиле  С, которая
//содержится  в  буфе­ре  оригинала, зарезервировать достаточно
//памяти  в  собственном  экземпляре
MyString::MyString(const MyString& CopySource)//важно передавать по ссылке параметр!!!
{
	cout <<  "Copy constructor:  copying from MyString"  << endl;
	if (CopySource.Buffer != NULL)
	{
		//  гарантировать  ГЛУБОКОЕ копирование,  создав сначала
		//  собственный буфер
		Buffer = new char[strlen(CopySource.Buffer) + 1];
		//  копирование из оригинала в локальный буфер
		strcpy(Buffer, CopySource.Buffer);
		// Отображение адреса области памяти локального буфера
		cout <<  "Buffer points  to:  Ox"  << hex;
		cout << (unsigned int*)Buffer << endl;
	}
	else
		Buffer = NULL;
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