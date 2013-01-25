#include <iostream>
#include "MocTest.h"

std::string MocTest::getName() const
{
  return className;
}
int main()
{
  MocTest moc;
  std::string className = moc.getName();
  className = "Something Else";
  std::cout << className << "\n";
  return 0;
}
