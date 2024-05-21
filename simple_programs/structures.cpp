#include <iostream>

int main() {
    int nbAnimals;
    std::cout << "how many pet do you have ?" << "\n";
    std::cin >> nbAnimals;

    if (nbAnimals > 0)
    {
        std::cout << "Nice! pets are so sick." << "\n";
    }
    else
    {
        std::cout << "Consider rescuing a shelter pet." << std::endl;
    }

    std::cout << "-- End of the program. --" << "\n";
    return 0;
}
