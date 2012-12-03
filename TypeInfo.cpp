#include <iostream>
#include <typeinfo>

using namespace std;

class Car
{
  private:
    string x;
  public:
    Car() {
      x = "Class Car";
    }
    void print()
    {
      cout << x << endl;
    }
};
class Bike
{
  private:
    string x;
  public:
    Bike() {
      x = "Class Bike";
    }
    void print()
    {
      cout << x << endl;
    }
};
int main()
{
  Car c;
  Bike b;
  c.print();
  b.print();
  cout << typeid(Car).name() << endl;
  cout << typeid(b).name() << endl;
}