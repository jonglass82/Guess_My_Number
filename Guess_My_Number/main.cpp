//
//  main.cpp
//  Guess_My_Number
//
//  Created by jon glass on 4/19/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int num = 1;
    int userGuess;
    
    do {
        std::cout << "Pick a number 1-10...";
        std::cin >> userGuess;

        if(userGuess < 1 || userGuess > 10){
            std::cout << "Your guess has to be a number between 1-10. Guess again...";
        }
        else{
            std::cout << "NOPE. You guessed: " << userGuess << "Guess again";
        }
    }while(userGuess != num);


    std::cout << "CORRECT!!! the number is: " << num;

    
    return 0;
}
