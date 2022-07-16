#pragma once
#include <string>
#include<sstream>
using namespace std;

class Student
{
	int id;
	string name;
	int year_old;
public:
	Student();
	Student(int id, string name, int year_old);
	~Student();
	string ToString();
	int GetId();
	string GetName();
	int GetYear_Old();
	void SetId();
	void SetName();
	void SetYear_old();

};
class Group
{
	int amount = 1;
	string title;
	string prof;
public:
	Group();
	Group(int amount, string title, string prof);
	~Group();
	string ToString();
	int GetAmount();
	string GetTitle();
	string GetProf();
	void SetAmount();
	void SetTitle();
	void SetProf();
};
