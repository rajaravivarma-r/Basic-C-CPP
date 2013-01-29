#include <iostream>
#include <memory>

using namespace std;
class SeeWhat
{

public:
SeeWhat()
{ cout << "See what constructor called\n"; }
~SeeWhat()
{ cout << "See what destructor called\n"; }

};

class PointerTest
{
public:

PointerTest() : seeWhat(unique_ptr<SeeWhat>((new SeeWhat())))
{
cout << "PointerTest class constructor called\n";
}

~PointerTest()
{
cout << "PointerTest class destructor called\n";
}

private:
unique_ptr<SeeWhat> seeWhat;

};

int main()
{
unique_ptr<PointerTest> testPointer(new PointerTest());
return 0;
}
