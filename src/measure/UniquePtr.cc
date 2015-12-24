#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <memory>
#include <assert.h>

#include "UniquePtr.h"

namespace measure
{

  UniquePtr::UniquePtr(std::string str) :
    description(str)
  {
  }
  
  UniquePtr::~UniquePtr()
  {
  }
  
  void UniquePtr::doMeasure()
  {
    startMeasure();
    std::cout << description;
    
    // Measurement Body
    for(auto i = 0; i <= RepeatMax; i++)
      {
	std::unique_ptr<int> p(new int(1));
      }
    
    endMeasure();
  }
}  // namespace measure
