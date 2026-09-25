#include <iostream>

using namespace std;

void main(int argc, char *argv[]){

    int num1 = 0, num2 = 0, sum = 0;

    cout << "Sum of 2 numbers" << endl;

    cout << "Insert 2 numbers" << endl;

    cout << "Insert first number: ";

    cin >> num1;

    cout << "Insert second number: ";

    cin >> num2;

    sum = num1 + num2;

    cout << "The result is: " << sum << endl;

    return EXIT_SUCCESS;

}
