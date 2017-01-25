#include <iostream>
#include <string>
#include "math.h"

int main() {

  bool playing = true; // Bool for the game loop

  while (playing == true) {  //Main game loop
    std::string menuInput;

    std::cout << "Type 'play' to play, or 'exit' to exit!\n";
    std::cin >> menuInput;

    if (menuInput == "play") {
      float answer;
      float guessNumber;
      bool gotanswer = false;

      std::cout << "To start, what is your favourite number?\n";
      float favouriteNumber;
      std::cin >> favouriteNumber;


      answer = square(favouriteNumber);

      std::cout << "I'm thinking of a number between 1 and "<< add(answer, absValue(favouriteNumber) * 2) << ", GUESS\n";
      std::cin >> guessNumber;

      if (guessNumber == answer) {            //This extra check fixes a bug where the right
        std::cout << "You win!\n";            //answer wouldn't get taken the first time
      } else if (guessNumber != answer) {
          while (!gotanswer) {

            if (guessNumber > answer)
            {
              std::cout << "think smaller, ";
            }
            else
            {
              std::cout << "think bigger, ";
            }

            std::cout << "Try again!\n";
            std::cin >> guessNumber;
          if (guessNumber == answer) {
            std::cout << "You win!\n";
            break;
        } else {
            continue;
        }
      }

    }else if (menuInput == "fun") {
      
    }

    } else if (menuInput == "exit") {
      playing = false;

    } else {
      std::cout << "not a valid command!\n";
    }

  }

  return 0;
}
