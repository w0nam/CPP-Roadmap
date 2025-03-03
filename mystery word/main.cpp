// Programm où l'utilisateur dois deviner un mot mystère.
// Le programme dois mélanger les lettres afin d'en output le mot.
#include "helper.hpp"
#include <iostream>
#include <string>

int main() {
    std::string word, mixedWord, userWord;
    int tries(5);
    char agree = 'N';
    bool play = false;
    word = askWord();

    std::cout << "Joueur #2 voulez vous jouer ? (y/N)" << std::endl;
    std::cin >> agree;

    if (agree == 'Y' || agree == 'y') {
        play = true;
    } else {
        play = false;
    }

    if (play) {
        mixedWord = mixWordUp(word);
    
        do {
            std::cout << "Quel est le mot ?" << std::endl << mixedWord << std::endl;
            std::cin >> userWord;

            if (userWord == word) {
                std::cout << "félicitation !" << std::endl;
            } else {
                std::cout << "Pas le bon mot ! Essayez encore." << std::endl;
            } 
        } while (userWord != word && tries > 0);
    } else {
        std::cout << "Très bien, bonne journée." << std::endl;
    }
    return 0;
}