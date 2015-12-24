#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <memory>
#include <assert.h>

#include "SharedPtr.h"

namespace measure
{
  
  SharedPtr::SharedPtr(std::string str) :
    description(str)
  {
  }
  
  SharedPtr::~SharedPtr()
  {
  }
  
  void SharedPtr::doMeasure()
  {
    startMeasure();
    std::cout << description;
    
    // Measurement Body
    for(auto i = 0; i <= RepeatMax; i++)
      {
      std::shared_ptr<int> p(new int(1));
      }
    
    endMeasure();
  }
}  // namespace measure
