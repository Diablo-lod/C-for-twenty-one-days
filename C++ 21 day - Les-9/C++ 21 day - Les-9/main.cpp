#include "Human.h"
#include <iostream>
#include "MyString.h"

using namespace std;

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


	system("pause");
	return 0;
}