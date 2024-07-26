#include <iostream>

int _addTwo(int _number)      //TypeDeFonction nomDeLaFonctions(Arguments)
{
    int value(number + 2);
    return value;
}

int main()
{
    int a(2), b(2);

    std::cout << "Valeur de a: " << a << std::endl;
    std::cout << "Valeur de b: " << b << std::endl;
    b = addTwo(a);
    std::cout << "Valeur de a: " << a << std::endl;
    std::cout << "Valeur de b: " << b << std::endl;
    return 0;
}
