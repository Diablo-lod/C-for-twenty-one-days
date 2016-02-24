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
//Поработаем с классом Human
	Human FirstMan;
	FirstMan.SetName("Adam");
	FirstMan.SetAge(30);

	Human FirstWoman("Eve");
	FirstWoman.SetAge(28);
		
	Human FirstChild("Rose", 1);
	
	FirstMan.IntroduceSelf();
	FirstWoman.IntroduceSelf();
	FirstChild.IntroduceSelf();

//Поработаем с классом MyClass
	MyString SayHello("Hello from String Class");

	cout << "String bufer: " << SayHello.GetLenght() << endl;
	cout << "Buffer  contains:  "  <<  SayHello.GetString()  << endl;

//Следующая функция демонстрирует аварийный отказ работы программы. Происходит
//	из-за того, что мы строку SayHello копируем в функцию, а по завершению работы
//	функции объект этого класса удаляется. НО по завершению выполнения кода программы
//	мы ее еще раз удаляем!!! а ее уже нет - вот и ошибка - поверхностное копирование!!!
//	далее все поправим ГЛУБОКИМ копированием
//	***************************
//	UseMyString(SayHello);
//	***************************

//После объявления конструктора копий попробуем еще раз использвать функцию
	UseMyString(SayHello);

	system("pause");
	return 0;
}