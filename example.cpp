#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

/*Code by Gregory Feng
Edited: 9/15/19
Program Desc: This is a program that creates a game where the user guesses a random number between 0 and 100. The program outputs the number of times that the user has guessed and also at the end, asks whether the user wants to play again or not.
 */


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
      timecount++;//Counts the amount of times you guessed
      if (randomnumber > guesses){ //If your guess was too low, print it
        cout << "Your guess was too low, try again!" << endl;
	break;
      } else if (randomnumber < guesses) { //If your guess was too high, print it
        cout << "Your guess was too high, try again!" << endl;
	break;
      } else if (randomnumber == guesses) { //If you got it correct
        cout << "Your guess was just right, well done!" << endl;
        cout << "It took you " << timecount << " tries!"; //Displays how many times you tried
	cout << "Would you like to play again? (Y/N)" << endl; //Want to play again?
        
	cin >> response;
	while ((!(response == 'Y')) && (!(response == 'N'))) {
	  cout << "Please pick Y or N" << endl;
	  cin >> response;
	}
        if (response == 'Y') {
	  playagain = false;
          cout << "Generating a new random number..." << endl; //Makes transition smoother and takes out one of the previous errors that I made.
	  randomnumber = rand()%100; //New random number
	  cout << "Input your guess!" << endl;
	  timecount = 0; //Timecount reset
	  break;
	}
	else if (response == 'N') {
	  playagain = true;
	  cout << "Thanks for playing!" << endl; //Exit message
	  break;
	}
        // switch (response) { //Switch for efficiency
	//   case 'Y':
	//     playagain = false;
        //     cout << "Generating a new random number..." << endl; //Makes transition smoother and takes out one of the previous errors that I made.
	//     randomnumber = rand()%100; //New random number
	//     cout << "Input your guess!" << endl;
	//     timecount = 0; //Timecount reset
	//     break;
	//   case 'N':
	//     playagain = true;
	//     cout << "Thanks for playing!" << endl; //Exit message
	//     break;
	//   default:
	//     cout << "Please pick Y or N"; //In case they don't pick Y nor N
	   
	    
	
	}
      
    }
  }
  return 0; //Return 0
}


