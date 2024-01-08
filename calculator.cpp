#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char c;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    cout << "Enter the operator among +, -, *, / : ";
    cin >> c;
    switch (c)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    default:
        cout << "You chose the incorrect operator.";
    }
    return 0;
}