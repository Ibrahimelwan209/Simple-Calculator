#include <iostream>
#include <cmath>
using namespace std;
void addition(double number1, double number2)
{
    cout << "The Result: " << number1 + number2 << endl;
}

void subtraction(double number1, double number2)
{
    cout << "The Result: " << number1 - number2 << endl;
}

void multiplication(double number1, double number2)
{
    cout << "The Result: " << number1 * number2 << endl;
}

void division(double number1, double number2)
{
    if (number2 == 0)
    {
        cout << "Error: Division by zero is not allowed." << endl;
    }
    else
    {
        cout << "The Result: " << number1 / number2 << endl;
    }
}

void modulo(double number1, double number2)
{
    if (number2 == 0)
    {
        cout << "Error: Division by zero is not allowed." << endl;
    }
    else
    {
        cout << "The Result: " << fmod(number1, number2) << endl;
    }
}


int main()
{
    char choice;
    do{
        double number1, number2;
    char op;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    switch (op)
    {
        case '+':
            addition(number1, number2);
            break;

        case '-':
            subtraction(number1, number2);
            break;

        case '*':
            multiplication(number1, number2);
            break;

        case '/':
            division(number1, number2);
            break;

        case '%':
            modulo(number1, number2);
            break;

        default:
            cout << "Error: Invalid operator." << endl;
    }


        cout << "Do you want to continue? (Y/N): ";
        cin >> choice;      
    }
     while (choice == 'Y' );
           return 0;   
}
