#include <iostream> //add for cin operators
#include <cstring> //the cstring header provides functions for dealing with c-style strings — null-terminated arrays of characters.
#include <fstream> //used to create/write/read files

using namespace std;
//makes all things under the std namespace available without having to prefix std:: before each of them

int main(void) {
  //beginning of function definition
	
  char seriesOfChar[81];
  //character array upto 80 characters
  
  do {
    //do/while loop
		bool palindrome = true;
    //boolean variable palindrome equals to true

		cout << "please enter a series of characters (up to 80 characters only): " << endl;
		cin >> seriesOfChar;

		int length = strlen(seriesOfChar);
		//int length/2;

		if (length > 0)
		{
      //determining if series of characters is a palindrome 
			for(int i = 0; i < (length); i++)
			{
				if(seriesOfChar[i] != seriesOfChar[length-1-i]) 
					palindrome = false;
			} 
		}

		if (palindrome == true)
		{ 
			cout << "palindrome" << endl;
    }
		else
		{
			cout << "not a palindrome" << endl;
		}

	} while (seriesOfChar != "");
    return(0);
    //restarts function
  }