//Author class header file

#ifndef AUTHOR_H
#define AUTHOR_H

#include <iostream>
#include <string>

using namespace std;

namespace author
{
	
	class Author
	{
		
		private:
			string name, email;
			char gender;
		public:
			Author();
			Author(string, string, char);
			string getName();
			string getEmail();
			void setEmail(string);
			char getGender();
			void print();			
	};
}

#endif
