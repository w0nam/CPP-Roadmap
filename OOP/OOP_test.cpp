#include <iostream>
#include <string>

int main()
{
    // Première déclaration de ma chaîne de caractère "myString"
    std::string myString("Bonjour !");
    std::cout << myString << std::endl;
    // Changement de la valeur de "myString"
    myString = "Bien le bonjour !";
    std::cout << myString << std::endl;
    return 0;
}
