#include <iostream>
#include <string>

int main()
{
    std::string repA, repB, repC;
    repA = "La peur des jeux de loteries.";
    repB = "La peur du noir.";
    repC = "La peur des vendredi treize.";

    // on pose la question et on recolte les réponse:
    std::cout << "Qu'est-ce que la kenophobie ?" << std::endl;
    std::cout << "A) " << repA << std::endl;
    std::cout << "B) " << repB << std::endl;
    std::cout << "C) " << repC << std::endl;

    char answer;
    std::cout << "Quelle est votre réponse (A, B ou C) ?" << std::endl;
    std::cin >> answer;

    std::string *userAnswer(0);
    switch (answer) {
        case 'A':
        userAnswer = &repA;
        break;

        case 'B':
        userAnswer = &repB;
        break;

        case 'C':
        userAnswer = &repC;
        break;
    }

    std::cout << "Vous avez choisis la réponse: " << *userAnswer << std::endl;
    return 0;
}
