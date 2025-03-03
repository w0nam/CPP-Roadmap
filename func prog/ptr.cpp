// Ce programme mintre l'utilisation des pointeur en C++ dans sa forme la plus basique.
#include <iostream>

int main() {
    // Déclare un int de nom "userAge" et de valeur "16"
    int userAge(16);
    // Déclare un pointeur de type "int", de nom "pointeur" avec la valeur "0"
    int *ptr(0);
    // Store l'adresse RAM de "userAge" dans "ptr". En utilisant '&'.
    ptr = &userAge;
    // Display l'adresse RAM de "userAge"
    std::cout << "User is: " << &userAge << "yo." << std::endl;
    // Display l'adresse RAM de "ptr"
    std::cout << "ptr value is: " << ptr << std::endl;
    // Display la valeur de "userAge" en passant par "ptr" (lecture de la case à l'adresse RAM de userAge, stocker dans ptr)
    std::cout << "ptr value is: " << *ptr << std::endl;

    return 0;
}
// Quand on utilises des pointeur, si on veux accéder à la valeur de la case vers laquelle on pointe
// il faut utiliser la notation "*nomDuPointeur". Autrement on accederas à l'adresse RAM de la "case"
// vers laquelle on pointe.
