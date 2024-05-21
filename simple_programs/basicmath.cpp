#include <iostream>

int main() 
{
    using namespace std;
    double a, b;

    cout << "Welcome to my simple calculator." << "\n";
    cout << "Enter a value for 'a': ";
    cin >> a;
    cout << "Enter a value for 'b': ";
    cin >> b;

    double const result(a+b);
    
    cout << a << " + " << b << " = " << result << "\n";
    cout << "-- End of the program --" << endl;
    return 0;
}
