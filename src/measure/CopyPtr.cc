#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <memory>
#include <assert.h>

#include "CopyPtr.h"

namespace measure
{

  CopyPtr::CopyPtr(std::string str) :
    description(str)
  {
  }
  
  CopyPtr::~CopyPtr()
  {
  }
  
  void CopyPtr::doMeasure()
  {
    startMeasure();
    std::cout << description;
    
    // Measurement Body
    std::vector<int> p(1000), q;
    for(auto i = 0; i <= RepeatMax; i++)
      {
	q = p;  // Copy
      }
    
    endMeasure();
  }
}  // namespace measure
