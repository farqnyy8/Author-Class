//Author class .cpp file

#include "Author.h"
using namespace author;

Author::Author()
{
	this->name = "";
	this->email = "";
	this->gender = ' ';
}

Author::Author(string name, string email, char gender)
{
	this->name = name;
	this->email = email;
	this->gender = gender;
}

string Author::getName()
{
	return this->name;
}

string Author::getEmail()
{
	return this->email;
}

void Author::setEmail(string email)
{
	this->email = email;
}

char Author::getGender()
{
	return this->gender;	
}

void Author::print()
{
	cout << "Name of Author: " << this->name << endl;
	cout << "Email of Author: " << this->email << endl;
	cout << "Gender of Author: " << this->gender << endl;
}