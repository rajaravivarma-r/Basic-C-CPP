#include <iostream>
#include <memory>

using namespace std;
class UniquePtrClassMember
{

public:
UniquePtrClassMember()
{ cout << "UniquePtrClassMember constructor called\n"; }
~UniquePtrClassMember()
{ cout << "UniquePtrClassMember destructor called\n"; }

};

class RawPointerClassMember
{

public:
RawPointerClassMember()
{ cout << "RawPointerClassMember constructor called \n"; }
~RawPointerClassMember()
{ cout << "RawPointerClassMember destructor called \n"; }

};

class PointerTest
{
public:

PointerTest() : uniquePtr(unique_ptr<UniquePtrClassMember>((new UniquePtrClassMember()))),
				rawPointer(new RawPointerClassMember())
{
cout << "PointerTest class constructor called\n";
}

~PointerTest()
{
cout << "PointerTest class destructor called\n";
}

private:
unique_ptr<UniquePtrClassMember> uniquePtr;
RawPointerClassMember *rawPointer;

};

void testFunction()
{
cout << "In testFunction\n";
unique_ptr<PointerTest> testPointer(new PointerTest());
cout << "Out of testFunction\n";
}

int main()
{
testFunction();
return 0;
}
