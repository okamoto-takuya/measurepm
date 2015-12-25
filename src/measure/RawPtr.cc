#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "RawPtr.h"

namespace measure
{

  RawPtr::RawPtr(std::string str) :
    description(str)
{
}

RawPtr::~RawPtr()
{
}

void RawPtr::doMeasure()
{
  startMeasure();
  std::cout << description;

  // Measurement Body
  for(auto i = 0; i <= RepeatMax; i++)
    {
      auto p = new int(1);
      delete p;
    }

  endMeasure();
}
}  // namespace measure
