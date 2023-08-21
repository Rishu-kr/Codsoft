//Intern Name -Rishabh Kumar 
#include<iostream>
using namespace std;
//main function
int main() {
    double num1, num2;
    char operation;
//enter first name
    cout << "Simple Calculator!" << endl;
    cout << "Enter the First Number: ";
    cin >> num1;
    // enter second name
    cout << "Enter the Second Number: ";
    cin >> num2;
//pick any operation
    cout << "pick operation (+, -, *, /): ";
    cin >> operation;
//perform the task 
    switch (operation) {
        //case 1
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        //case 2
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        //case 3
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        //case 4
        case '/':
            if (num2 == 0) {
                //zero cant be used as a divisor
                cout << "Error: Division by zero is invalid." << endl;
            } else {
                cout << "Result: " << num1 / num2 << endl;
            }
            break;
        default:
            //invalid operation then choose valid one
            cout << "Operation invalid.Please choose a valid operation." << endl;
    }
//that is the code 
    return 0;
}
