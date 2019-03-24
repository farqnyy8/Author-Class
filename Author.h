//Author class header file

#ifndef AUTHOR_H
#define AUTHOR_H

#include <iostream>
#include <string>

using namespace std;

//learning to create and use namespaces
namespace author
{
	
	class Author
	{
		private:
			//data fields
			string name, email;
			char gender;
		
		public:
			//contructors
			Author();
			Author(string, string, char);
			
			//accessors
			string getName();
			string getEmail();
			char getGender();
			
			//mutator
			void setEmail(string);
			
			//behaviors
			void print();			
	};
}

#endif
