#include <iostream>
#include "math.h"

int main() {

  bool playing = true;

  while (playing == true) {
    int menuInput;

    std::cout << "Enter 1 to play, 0 to exit\n";
    std::cin >> menuInput;

    if (menuInput == 1) {
      int answer;
      int guessNumber;
      bool gotanswer = false;

      std::cout << "To start, what is your favourite number?\n";
      int favouriteNumber;
      std::cin >> favouriteNumber;

      answer = square(favouriteNumber);

      std::cout << "I'm thinking of a number between 1 and "<< add(answer, favouriteNumber) << ", GUESS\n";
      std::cin >> guessNumber;

              //where the right answer wouldn't get taken
        while (!gotanswer) {
        std::cout << "Try again!\n";
        std::cin >> guessNumber;
        if (guessNumber == answer) {
          std::cout << "You win!\n";
          break;
        } else {
          continue;
        }
       
      }


    } else if (menuInput == 0) {
      playing = false;

    } else {
      std::cout << "not a valid command!\n";
    }

  }

  return 0;
}