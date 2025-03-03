#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <fstream>

std::string mixWordUp(std::string word) {
    // Fonction qui prend le mot entré par le joueur 1
    // mélange ses caractère et renvoie un mot mélanger.
    std::string mixUp;
    int position(0);

    while (word.size() != 0)
    {
        position = rand() % word.size();
        mixUp += word[position];
        word.erase(position, 1);
    }

    return mixUp;
} 