#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

  int num = 1, max = 0;

  while (num != 0) {
    
    cout << "Digit a number (digit 0 to exit):";

    cin >> num;

    if (num > max) { max = num; }
 
  }

  std::cout << "The max is " << max << endl;
  
  return EXIT_SUCCESS;

}

