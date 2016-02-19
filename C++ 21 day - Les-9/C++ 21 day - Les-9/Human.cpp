#include "Human.h"
//описываем реализацию методов, указанных в заголовочном файле для класса

//*********не забываем указать принадлежность функции к классу********

//Описание кода конструктора. Наилучшее место для инициализации переменных!!!
Human::Human()
{
	Age = 0;//гарант отсутсвия случайного значения
	//Выведем текстовую строку о создании конструктора, чтобы знать когда он сработал
	cout << "Constructed an instance of class Human" << endl;
}
//Опишем здесь перегруженный конструктор
Human::Human(string HumanName)
{
	Name = HumanName;
	Age = 0;//гарант отсутсвия случайного значения
	//Выведем текстовую строку о создании конструктора, чтобы знать когда он сработал
	cout << "Overloaded constructor creates " << Name << endl;
}
//Опишем здесь еще один перегруженный конструктор с возрастом
Human::Human(string HumanName, int HumanAge)
{
	Name = HumanName;
	Age = HumanAge;
	cout << "Overloaded constructor creates ";
	cout << Name << " of " << Age << " years" << endl;
}

//Определим деструктор, обратим внимание где расположена ТИЛЬДА!!!
Human::~Human()
{

}


void Human::SetName(string HumansName)
{
	Name = HumansName;
}

void Human::SetAge(int HumansAge)
{
	Age = HumansAge;
}

//Эта функция реализует принцип абстркции, тк только с ее помощью мы может что-то
//узнать о переменно возраста
int Human::GetAge()
{
	if ( Age > 30)
	{
		return (Age - 2);
	}
	else return (Age);
}

void Human::IntroduceSelf()
{
	cout << "I am " << Name << " and am ";
	cout << Age << " year old" << endl;
}