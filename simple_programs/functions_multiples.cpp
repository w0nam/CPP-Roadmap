#include <iostream>

using namespace std;

int addTwo(int number)      //TypeDeFonction nomDeLaFonctions(Arguments)
{
    int value(number + 2);
    return value;
}

int main()
{
    int a(2), b(2);

    cout << "Valeur de a: " << a << "\n";
    cout << "Valeur de b: " << b << "\n";
    b = addTwo(a);
    cout << "Valeur de a: " << a << "\n";
    cout << "Valeur de b: " << b << "\n";
    return 0;
}
