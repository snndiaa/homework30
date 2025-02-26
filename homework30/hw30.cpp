#include <iostream>

using namespace std;

enum Menu 
{
    PLUS = 101,
    MINUS = 102,
    DIVIDE = 103,
    MULT = 104,
    EXIT = 0
};

double add(double a, double b) 
{ 
    return a + b; 
}

double subtract(double a, double b) 
{ 
    return a - b; 
}

double divide(double a, double b) 
{
    if (b == 0) 
    {
        cout << "error!you can't divide on zero\n";
        return 0;
    }
    return a / b;
}

double multiply(double a, double b) 
{ 
    return a * b; 
}


void menu() 
{
    int choice;
    double num1, num2;

    do {
        cout << "\nchoose an option: "<< endl;
        cout << "101 - add (+)"<< endl;
        cout << "102 - substract (-)" << endl;
        cout << "104 - multiply (*)"<< endl;
        cout << "0 - exit"<< endl;
        cout << "your choice: ";
        cin >> choice;

        if (choice == EXIT) 
        {
            cout << "exitting."<<endl;
            break;
        }

        cout << "enter first number: ";
        cin >> num1;
        cout << "enter second number: ";
        cin >> num2;

        switch (choice) 
        {
        case PLUS:
            cout << "result: " << add(num1, num2) << endl;
            break;
        case MINUS:
            cout << "result: " << subtract(num1, num2) << endl;
            break;
        case DIVIDE:
            cout << "result: " << divide(num1, num2) << endl;
            break;
        case MULT:
            cout << "result: " << multiply(num1, num2) << endl;
            break;
        default:
            cout << "error!incorrect choice!"<<endl;
        }

    } while (true);
}

int main() 
{
    menu();

    return 0;
}
