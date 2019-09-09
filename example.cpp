#include <iostream>

using namespace std;

int main()
{
  int randomnumber, guesses; //Variable definitions
  int timecount = 0;
  bool playagain = false;
  char response;
  cout << "Welcome to the guessing game!" << endl; 
  cout << "Generating a random number between 0 and 100..." << endl;
  srand (time(NULL)); //Random seed creatopm
  randomnumber = rand()%100; //Random number 0-100
  cout << "Put in your guess of what the number is!";
  while(playagain == false) { //Play again true/false flipped
    while (randomnumber != guesses){ //If you don't guess right, keep looping
      cin >> guesses; 
      if (randomnumber > guesses){ //If your guess was too low, print it
        cout << "Your guess was too low, try again!" << endl;
        timecount++; //Counts how many times you guessed
	break;
      } else if (randomnumber < guesses) { //If your guess was too high, print it
        cout << "Your guess was too high, try again!" << endl;
        timecount++;
	break;
      } else if (randomnumber == guesses) { //If you got it correct
        cout << "Your guess was just right, well done!" << endl;
        cout << "It took you " << timecount << " tries!"; //Displays how many times you tried
	cout << "Would you like to play again?" << endl; //Want to play again?
	cin >> response;
        switch (response) { //Switch for efficiency
	  case 'Y':
	    playagain = false;
	    cout << "Generating a new random number..." << endl; //Makes transition smoother and takes out one of the previous errors that I made.
	    randomnumber = rand()%100; //New random number
	    cout << "Input your guess!" << endl;
	    break;
	  case 'N':
	    playagain = true;
	    cout << "Thanks for playing!" << endl; //Exit message
	    break;
	  default:
	    cout << "Please pick Y or N"; //In case they don't pick Y nor N
	}
      }
    }
  }
  return 0; //Return 0
}

