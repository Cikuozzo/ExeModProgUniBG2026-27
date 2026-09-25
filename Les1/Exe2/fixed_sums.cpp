#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  
  int num = 1, sum = 0;

  while (num != 0){

    cout << "Digit a number (digit 0 to exit): ";

    cin >> num;

    sum = sum + num;
  }

  cout << "\nThe result is " << sum << endl;

  return EXIT_SUCCESS;

}
