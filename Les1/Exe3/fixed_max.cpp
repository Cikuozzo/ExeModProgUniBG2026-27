#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int num1 = 0, num2 = 0;

  cout << "Max from 2 numbers " << endl;
  
  cout << "Insert the first number: ";

  cin >> num1;
  
  cout << "Insert the second number: ";

  cin >> num2;
  
  if (num1 >= num2){
    cout << num1 << " is greater than " << num2 << endl;
  } else {
    cout << num1 << " is less or equal than " << num2 << endl;
  }

  return EXIT_SUCCESS;
}
