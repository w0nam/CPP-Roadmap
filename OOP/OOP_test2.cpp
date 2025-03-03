#include <iostream>
#include <ostream>
#include <string>

int main()
{
    // déclaration des variables maChaîne 1 & 2.
    std::string maChaine1("Bonjour, je m'appelle Lucas.");
    std::string maChaine2("Enchanté de vous rencontrez !");
    std::string maChaine3 = maChaine1 + " " + maChaine2;

    std::cout << maChaine3 << std::endl;

    if (maChaine1 == maChaine2)
    {
        std::cout << "Ces mots sont les mêmes !" << std::endl;
        std::cout << maChaine3.size() << std::endl;
        return 0;
    }
    else
    {
        std::cout << "Ces mots ne sont pas les mêmes" << std::endl;
    }

    std::cout << maChaine3.substr(10, 40) << std::endl;
    return 0;
}
/*
    Les variable à l'intérieur d'objet  sont appelé "attributs".
    On les appellent aussi "variables membres".
    Les fonctions sont appeler "méthodes", On parle aussi de "fonction membres".
    notations:
    - objet.methode() ; ne s'applique qu'au objets et non au variables !
    pour std::string, on peu appliquer, par exemple .size(), .substr(), .erase().
    substr() est particulière, voici sa notation:
    - string substr(size_type index, size_type num = npos)
    avec cette méthode, on prend X caractère à partir de Y caractères.
*/
