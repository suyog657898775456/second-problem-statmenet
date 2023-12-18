
   #include <iostream>

using namespace std;

int main() 
{
    float num1, num2, result;
    char operation;

    
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    
    cout << "select operation (+, -, *, /): ";
    cin >> operation;

    
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
           
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1;  
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            return 1;  
    }
    
    cout << "Your Answer is " << result << endl;
    return 0;
} 
    
