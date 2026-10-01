#include <iostream>

int main(){
    srand(time(0));
    int randNumber = rand() % 101;
    int guess = -1;

    std::cout << "Guess the number between 0 and 100" << std::endl;

    while (guess != randNumber){
        std::cout << "Pick a number" << std::endl;
        std::cin >> guess;

        if (std::cin.fail()){
            std::cout << "Please input a valid number" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // only accepts integeres

        }
        
        if (guess > randNumber){
            std::cout << "The number is lower" << std::endl;
        }
        if (guess <randNumber){
            std::cout << "The number is higher" << std::endl;
        }

        
    }
    std::cout << "Congrats! You guessed the number!" << std::endl;


    return 0;
}