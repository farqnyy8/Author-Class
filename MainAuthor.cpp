/*
created by: Faruq E Hammed
Date: 01/30/2019
Language: C++
*/


//Author Class Main Implementation

#include "Author.h"
using namespace author;

//global variables
//SIZE purpose: number of elements in array to be created
const int SIZE = 2;


//function declaration
Author getAuthorInfo();

main()
{
	Author authors[SIZE];
	
	authors[0] = getAuthorInfo();
	authors[0].print();
	
	return 0;
}

/*
Function Name: getAuthorInfo()
Purpose: to get input from the user to create an Author object
Paramter: Nothing
Return type: Author
Notes:
	*email must contain '@' to be valid. loop using do...while until email is valid 
*/
Author getAuthorInfo()
{
	//local var
	string name, email;
	char gender;
	bool flag = false;
	
	//code
	do
	{
		system("cls");
		
		cout << "Enter Author's Name: ";
		getline(cin, name);
		
		cout << "Enter Author's email: ";
		getline(cin, email);
		
		int length = email.length();
		
		for (int i = 0; i < length; i++)
		{
			if(email[i] == '@')
			flag = true;
		}
		
		if (flag == false)
		{
			cout << "Invalid Email: Repeat Information Entry!!!" << endl;
			system("pause");
		}
		
	}while(flag == false);
	
	cout << "Enter Author's Gender ('M', 'F' or 'U'): ";
	cin >> gender;
	
	Author author(name, email, gender);
	
	return author;
}
