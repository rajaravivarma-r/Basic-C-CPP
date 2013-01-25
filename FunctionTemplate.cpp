#include <iostream>
using namespace std;

template<class T> void printDouble(T data) {
  cout << "Double is: " << data * data << endl;
}

int main() {
printDouble(29);
printDouble(40.343);
unsigned int positive_integer;

cout << "Enter integer: " << endl;
cin >> positive_integer;

printDouble(positive_integer);
return 0;
}
