#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char opera;
    cout << "enter 1st number \n";
    cin >> num1;
    cout << "enter 2nd number \n";
    cin >> num2;
    cout << "enter operator \n";
    cin >> opera;

    if (opera == '+')
        cout << (num1 + num2);
    else if (opera == '-')
        cout << (num1 - num2);
    else if (opera == '*')
        cout << (num1 * num2);
    else if (opera == '/')
        cout << (num1 / num2);
    else
        cout << "sorry!!";
    return 0;
}