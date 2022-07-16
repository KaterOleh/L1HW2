#include "Student.h"
#include <iostream>

Student::Student()
{
	id = 0;
	name = "";
	year_old = 15;
}

Student::Student(int id, string name, int year_old)
{
	this->id = id;
	this->name = name;
	this->year_old = year_old;
}

Student::~Student()
{
	cout << "::::::::::::";
}

string Student::ToString()
{
	stringstream ss;
	ss << "\n"<<
		"id: "<<id << "\n" <<
		name <<"\n"<<
		"year old: "<<year_old ;
	return ss.str();
}

int Student::GetId()
{
	return id;
}

string Student::GetName()
{
	return string();
}

int Student::GetYear_Old()
{
	return year_old;
}

void Student::SetId()
{
	this->id = id;
}

void Student::SetName()
{
	this->name = name;
}

void Student::SetYear_old()
{
	this->year_old = year_old;
}

Group::Group()
{
	amount = 1;
	title = "";
	prof = "";
}

Group::Group(int amount, string title, string prof)
{
	this->amount = amount;
	this->title = title;
	this->prof = prof;
}

Group::~Group()
{
	cout << "::::::::::::";
}

string Group::ToString()
{
	stringstream ss;
	ss <<"Number of students: " << amount << "\n" <<
		"Title: " << title << "\n" <<
		"Profession: " << prof << "\n";
	return ss.str();
}

int Group::GetAmount()
{
	return amount;
}

string Group::GetTitle()
{
	return string();
}

string Group::GetProf()
{
	return string();
}

void Group::SetAmount()
{
	this->amount = amount;
}

void Group::SetTitle()
{
	this->title = title;
}

void Group::SetProf()
{
	this->prof = prof;
}

int main() {
	Group group(6, "M-42", "Nurse");
	cout << group.ToString();
	Student Fiona(1, "Fiona", 29);
	Student Carl(2, "Carl", 17);
	Student Debbie(3, "Debbie", 18);
	Student Liam(4, "Liam", 16);
	Student Ian(5, "Ian", 25);
	Student Lip(6, "Lip", 27);

	cout << Fiona.ToString() << endl;
	cout << Carl.ToString() << endl;
	cout << Debbie.ToString() << endl;
	cout << Liam.ToString() << endl;
	cout << Ian.ToString() << endl;
	cout << Lip.ToString() << endl;

	return 0;
}
