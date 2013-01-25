#include <string>

class MocTest
{

public:
  MocTest():className("MocTest"), dummyVar(25) {};
  ~MocTest() {};
  std::string getName() const;

private:
  std::string className;
  int dummyVar;
};
