#include <iostream>

int main()
{
    bool _adult(true);
    int _nbrEnfants;
    
    std::cout << "how many children do you have ?" << "\n";
    std::cin >> _nbrEnfants;

    if (_adult && _nbrEnfants >= 1)
    {
        std::cout << "You are an adult & you have one or more child." << "\n";
    }
    else
    {
        std::cout << "You are not an adult OR you don't have any children." << "\n";
    }
    
    return 0;
}