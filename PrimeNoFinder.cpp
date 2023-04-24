#include<iostream>

using namespace std;
main() {
  int num, i;
  bool prime = true;
  cout << "enter your number:";
  cin >> num;

  for (i = 2; i < num; i++) {
    if (num % i == 0) {
      prime = false;
      break;
    }
  }
  if (prime) {
    cout << num << " is prime number" <<
      endl;
  } else {
    cout << num << " is not prime number";
  }

}
