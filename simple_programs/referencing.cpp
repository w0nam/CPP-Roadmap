#include <iostream>
#include <string>

int main() 
{
    int userAge;
    int& userAgeRef(userAge);
    std::string userName;

    std::cout << "How old are you ?" << "\n";
    std::cin >> userAge;
    std::cout << "You are " << userAge << "yo. (Using userAge)" << "\n";
    std::cout << "You are " << userAgeRef << "yo. (using userAgeReferences)" << "\n";
    std::cout << "What is your first name ?" << "\n";
    std::cin >> userName;
    std::cout << "Your name is " << userName << " & your are " << userAge << "yo." << "\n";
    std::cout << "-- End of the program. --" << std::endl;
    return 0;
}