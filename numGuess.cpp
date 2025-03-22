#include <iostream>

const float CORRECT_NUMBER = 5.0;

int main() {
    // asks user to guess a number and sets variable guess to that number
    float guess;
    std::cout << "Hello, try guessing my number: ";
    std::cin >> guess;

    // If you get the right number
    if (guess == CORRECT_NUMBER) {
        std::cout << "You got it!! Well done!" << std::endl;
    }

    // If you get the wrong number
    if (guess != CORRECT_NUMBER) {
        std::cout << "Sorry! The correct number was " << CORRECT_NUMBER << std::endl;
    }

    return 0;
}