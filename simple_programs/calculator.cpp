//Basic calculator using a switch statement and an int to select what operation to run.
#include <iostream>
#include <cstdio>

int main()
{
    int choice;
    double numberA;
    double numberB;
    double result;

    std::cout << "Hello, welcome in my calculator program !\nWhat operation are you planning to run ?\n";
    std::cout << "1. Addition\t 2. Soustraction\t 3. Multiplication\t 4. Division\t" << std::endl;
    std::cin >> choice;
    std::cout << "OK, now input a value for the number A:" << std::endl;
    std::cin >> numberA;
    std::cout << "Cool! Now a value for the number B:" << std::endl;
    std::cin >> numberB;
    std::cin.ignore();

    switch(choice) {
        case 1:
            result = numberA + numberB;
            std::cout << numberA << " + " << numberB << " = " << result << std::endl;
        break;

        case 2:
            result = numberA - numberB;
            std::cout << numberA << " - " << numberB << " = " << result << std::endl;
        break;

        case 3:
            result = numberA * numberB;
            std::cout << numberA << " x " << numberB << " = " << result << std::endl;
        break;

        case 4:
            result = numberA / numberB;
            std::cout << numberA << " / " << numberB << " = " << result << std::endl;
        break;
/*
        case 5:
            result = numberA % numberB;
            std::cout << numberA << " % " << numberB << " = " << result << std::endl;
        break;
*/
    }
    std::cout << "\nThanks for using my program !\n";
    std::cout << "press any key to exit..." << std::endl;
    std::getchar();
    return 0;
}
