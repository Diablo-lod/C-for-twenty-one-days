#pragma once

#include <string>
#include <iostream>

using namespace std;

//������ ����� ����� � ��������� ��� ��� ��������(����������) � ��������� �������
//(�������) � ������������ ������. ��� ���������� ������� ��������������
//� ����������� �����, �� � ����������� *.��� - ������� ������������
class Human
{
	//�������� ������ �� ��� ��� ����� ������
private:
	string Name;
	int Age;
	//�������� ������ ��� ���� ���������
public:
	//������������ ������������ �� �����������, �� ��� ������������� ����������-����������!!!
	//���������� ������������ ������. �� ���������� ��� �������� �������!!!
	//���������� ������ ������������ ������-������ �� �����������,
	//����� ������������ �������������, ���������� � �� ������!
	Human();
	//��� �� �������� ������������� �����������, ������� ��������� ����� 
	//��������� �����
	Human(string HumanName);
	//��� �� �������� ������������� �����������, ������� ��������� ����� 
	//��������� ����� � ��������
	Human(string HumanName, int HumanAge);
// ������������� ���������� ����� ����������� � ��������� �������:
//		Human(string HumanName, int HumanAge=10);
//��� ������ ������ ���� ������������ ������� ��������� ����� �������������
//	Human FirstChild("Rose"); - ����� �������� � ������ ���� � ��������� - 10

//��������� � ���������� ����������� - ������� ������ ������ �� ������
	~Human();

	void SetName(string HumansName);
	void SetAge(int HumansAge);
	int GetAge();
	void IntroduceSelf();
};