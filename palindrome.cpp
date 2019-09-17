#include <iostream>

using namespace std;

int main() {
  
  //Variable definitions
  int falsecounter = 0;
  char str[];
  char character1;
  char character2;
  cout << "Welcome to Palindrome!" << endl;
  cout << "Please input an up to 80 character string and I will tell you whether it is a palindrome or not." << endl;
  cin >> str;

  //Makes sure that the string size is less than 80 characters
  while (str.size() >= 80) {

    cout << "Less than 80 characters please" << endl;
    cin >> str;
  }
  
  //Code borrowed from stackoverflow
  for (int i = 0, len = str.size(); i < len; i++)
    {
        if (ispunct(str[i]))
        {
            str.erase(i--, 1);
            len = str.size();
        }
    }
  //Repeats half of the string size times
  for (int i = 0; i < str.size()/2; i++) {
    for (int j = str.size() - 1; i >= 0; i--) {
      if (str[i] == string[j]) {
	cout << "True"<<endl;
	
	break;
      } else {
	cout << "False"<<endl;
	falsecounter++;
	break;
      }
    }
  }
  if (falsecounter > 0) {
    cout << "The inputted string is not a palindrome";
  }
  else {
    cout << "The inputted string is a palindrome";
  }
      
}
