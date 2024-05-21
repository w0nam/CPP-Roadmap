#include <iostream>
/* 'while' method (besoin d'initialiser la boucle avec une valeur qui valide la conditions de démarrage de cette dernière.)
int main() 
{
    int _children(-1);

    while (_children < 0)                                                    //'while' ne lis pas forcément la boucle entièrement. Pour ça  qu'elle doit être initialisé avec une valeur qui lance la boucle. 
    {
        std::cout << "How many children do you have ?" << "\n";
        std::cin >> _children; //dans le cas présent la boucle redémarre si on entre un nombre négatif. si j'avais voulue que ce soit vrai pour l'inverse, j'aurais initialiser ma variable avec un chiffre positif.
    }
    std::cout << "Thanks for inputing a valid number of children." << "\n";
    std::cout << "You have " << _children <<" children" << "\n";
    std::cout << "-- End of the program --" << std::endl;
    return 0;
}
*/

/* Technique do...while (lis au moins une fois la boucle donc pas besoin d'initialisé avec une valeurs qui démarre la boucle.)
int main()
{
    int _car;
    do                                                                       //La boucle 'do...while' lis au moins une fois la fonctions. Pas la peine de la démarrer a '-1'. Je n'ai pas besoin de la démarrer avec une valeur par défauts non plus.
    {
        std::cout << "Combien de voiture(s) possedez-vous ? ";
        std::cin >> _car;

    } while (_car < 0);
    std::cout << "Merci d'avoir indiquer combien de voiture(s) vous possedez." << "\n";
    std::cout << "Vous avez " << _car << " voitures." << std::endl;
    std::cout << "-- End of the program --" << std::endl;
    return 0;
    
}
*/

/* La boucle 'for'

int main() 
{
    int compteur;
    for (compteur = 1; compteur <= 1000; compteur++) // for (initialisation; condition; incrémentations/décrémentations).
    {
        std::cout << compteur << std::endl;
    }
    return 0;
}
//il est courant d'initialiser la variable dans la déclaration 'for' = (for (int compteur(0); compteur <=1000; compteur++)).
*/

//On utilise 'for" quand on connaît le nombre de répétitions désirer.
//les conditions permettent de tester les valeurs des variables et de modifier le comportement du programme en conséquence.
//La condition if...else if...else est la plus courante.
//La conditions 'switch', plus spécifique, sert à tester les différentes valeurs possibles d'une seule variable.
//les boucles servent à répéter les mêmes instructions plusieurs fois.
//On distingues trois types de boucles: 'while', 'do...while' et 'for'.
