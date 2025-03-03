// Ce simple programme montre l'utilisation dîtes dynamiques des pointeurs en C++, dans sa forme la plus basique.
#include <iostream>

int main() {
    // Déclare un pointeur initialisé à 0
    int *ptr(0);
    // Alloue de l'espace en RAM pour un int
    ptr = new int;
    // Va à cet espace de ram alloué de manière à y populer la valeur 32
    *ptr = 32;

    std::cout << "ptr value: " << ptr << std::endl;
    std::cout << "*ptr value: " << *ptr << std::endl;
    // "nettoie" l'espace de RAM dynamiquement alloué
    delete ptr; // inutile car on y passe la valeur 150 juste après.

    std::cout << "ptr value (after delete): " << ptr << std::endl;
    std::cout << "*ptr value (after delete): " << *ptr << std::endl;        // Remplis d'une "garbage value"

    ptr = new int;
    *ptr = 150;

    std::cout << "ptr value (after realloc): " << ptr << std::endl;
    std::cout << "*ptr value (after realloc): " << *ptr << std::endl;

    delete ptr;     // si tu "new", tu "delete".
    return 0;
}

// On utilise des pointeurs quand: On a besoin de gérer la création et la destruction des "cases" de RAM,
// Quand on veux partager des variable dans plusieurs bou de code (passer outre le scope).
// et quand on veux selectionner 1 valeurs parmis plusieurs options (tableau par exemple).
