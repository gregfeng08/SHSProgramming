#include <iostream>

using namespace std;

int main()
{
  int randomnumber, guesses;
  int timecount = 0;
  bool playagain = false;
  char response;
  cout << "Welcome to the guessing game!" << endl;
  cout << "Generating a random number between 0 and 100..." << endl;
  srand (time(NULL));
  randomnumber = rand()%100;
  cout << "Put in your guess of what the number is!";
  while(playagain == false) {
    while (randomnumber != guesses){
      cin >> guesses;
      if (randomnumber > guesses){
        cout << "Your guess was too low, try again!" << endl;
        timecount++;
	break;
      } else if (randomnumber < guesses) {
        cout << "Your guess was too high, try again!" << endl;
        timecount++;
	break;
      } else if (randomnumber == guesses) {
        cout << "Your guess was just right, well done!" << endl;
        cout << "It took you " << timecount << " tries!";
	cout << "Would you like to play again?" << endl;
	cin >> response;
        switch (response) {
	  case 'Y':
	    playagain = false;
	    cout << "Generating a new random number..." << endl;
	    randomnumber = rand()%100;
	    cout << "Input your guess!" << endl;
	    break;
	  case 'N':
	    playagain = true;
	    cout << "Thanks for playing!" << endl;
	    break;
	  default:
	    cout << "Please pick Y or N";
	}
      }
    }
  }
  return 0;
}

