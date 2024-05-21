#include <iostream>
#include <string>

int main() 
{
    int _userAge;
    int& _userAgeRef(_userAge);
    std::string _userName;

    std::cout << "How old are you ?" << "\n";
    std::cin >> _userAge;
    std::cout << "You are " << _userAge << "yo. (Using userAge)" << "\n";
    std::cout << "You are " << _userAgeRef << "yo. (using userAgeReferences)" << "\n";
    std::cout << "What is your first name ?" << "\n";
    std::cin >> _userName;
    std::cout << "Your name is " << _userName << " & your are " << _userAge << "yo." << "\n";
    std::cout << "-- End of the program. --" << std::endl;
    return 0;
}
