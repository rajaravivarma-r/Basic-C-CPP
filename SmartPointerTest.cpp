#include <iostream>
#include <memory>

using namespace std;
class SeeWhat
{
public:
SeeWhat()
{ cout << "See what constructor\n"; }
~SeeWhat()
{ cout << "See what destructor\n"; }
};

class PointerTest
{

public:

PointerTest()
{
SeeWhat *tmp = new SeeWhat();
seeWhat = move(tmp);
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
