#include <iostream>

int main() 
{
    int numberCar;
    std::cout << "how many cars do you have?" << "\n";
    std::cin >> numberCar;
    switch (numberCar)
    {
    case 0:
        std::cout << "You should buy a car, you maggot." << "\n"; break;
    
    case 1:
        std::cout << "Like everyone on Earth, jackass." << "\n"; break;

    case 2:
        std::cout << "Now that's impressive !" << "\n"; break;
    
    case 3:
        std::cout << "You just showing of at this point..." << "\n"; break; 
    
    default:
        std::cout << "Pretty Sick." << "\n"; break;
    }
    std::cout << "-- End of the program --" << std::endl;
    return 0;
}