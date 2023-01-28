#include <iostream>

using namespace std;

int main() {
  
  string player;
  int computer;

  cout << "Welcome to the Rock, Paper, Scissors game!" << endl;
  cout << "Enter what you would like to play (r, p, or s): ";

  cin >> player;


  srand(time(0));
  computer = (rand() % 3) + 1;

  cout << computer << endl;

  if(player == "r") {
    cout << "You played rock." << endl;

    if(computer == 1) {
      cout << "Computer played rock." << endl;
      cout << "It's a tie." << endl;
    }

    else if(computer == 2) {
      cout << "Computer played paper." << endl;
      cout << "You lose." << endl;
    }

    else if(computer == 3) {
      cout << "Computer played scissors." << endl;
      cout << "You win! :)" << endl;
    }
  }
 else if(player == "p") {
    cout << "You played paper." << endl;

    if(computer == 1) {
      cout << "Computer played rock." << endl;
      cout << "You win! :)" << endl;
    }

    else if(computer == 2) {
      cout << "Computer played paper." << endl;
      cout << "It's a tie." << endl;
    }

    else if(computer == 3) {
      cout << "Computer played scissors." << endl;
      cout << "You lose." << endl;
    }
  }

  else if(player == "s") {
    cout << "You played scissors." << endl;

    if(computer == 1) {
      cout << "Computer played rock." << endl;
      cout << "You lose." << endl;
    }

    else if(computer == 2) {
      cout << "Computer played paper." << endl;
      cout << "You win! :)" << endl;
    }

    else if(computer == 3) {
      cout << "Computer played scissors." << endl;
      cout << "It's a tie." << endl;
    }
  }

}