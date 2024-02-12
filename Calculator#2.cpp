#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    string fullName;
    int num1, num2, choice;
    int value;
    int age;
   
    cout << "Type your full name: ";
    getline(cin, fullName);

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << endl << "====================================" << endl;
        cout << "\nHi" << " " << fullName << "!" << " " << "You can now proceed...." << endl << endl;
    }
    else {
        cout << "Sorry, you're not 18 or older. Access denied." << endl;
        return 0;
    }
    cout << "========================================" << endl;
    cout << "Welcome to Calculator " << fullName << "!" << endl;
    cout << "========================================" << endl << endl;
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter a second number: ";
    cin >> num2;
    cout << endl << "\tCHOICES" << endl;
    cout << endl << "[1]ADDITION [2]SUBTRACTION" << endl;
    cout << "[3]MULTIPLICATION [4]DIVISION" << endl;
    cout << "[5]MODULO [6]POWER [7]Exit" << endl << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    system("cls");

    switch (choice) {
    case 1:
        value = num1 + num2;
        break;
    case 2:
        value = num1 - num2;
        break;
    case 3:
        value = num1 * num2;
        break;
    case 4:
        value = num1 / num2;
        break;
    case 5:
        value = num1 % num2;
        break;
    case 6:
        value = pow(num1, num2);
        break;
    case 7:
        cout << "Exiting Program." << endl;
        return 0;
    default:
        cout << "Invalid Input, Please enter the choices above!";
        return 0;
    }
    cout << "The result is: " << value << endl;

    return 0;
}