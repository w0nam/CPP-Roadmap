//Basic utilization of 'bool', 'std::cin.ignore()' && 'if - else' loop.
#include <iostream>
#include <cstdio>

int main()
{
    bool _adult(false);
    int _age;

    std::cout << "\nYou must be 18yo to enter my website. How old are you ?\n\n";
    std::cin >> _age;
    std::cin.ignore();

        if (_age >= 18 && _age < 100) {
            _adult = true;
            std::cout << "\nLet's ask the computer if you are an adult !\n";
            std::cout << "is an adult ? " << _adult << " (1 usually means \"yes\" in computer.)" << std::endl;
            std::cout << "you ARE an adult !" << std::endl;
        }
        else {
            _adult = false;
            std::cout << "\nLet's adk the computer if you are and adult !\n";
            std::cout << "is an adult ? " << _adult << std::endl;
            std::cout << "You are NOT an adult !" << std::endl;
        }

    std::cout << "\nPress any key to exit..." << std::endl;
    std::getchar();
    return 0;
}
