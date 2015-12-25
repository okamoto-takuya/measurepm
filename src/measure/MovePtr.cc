#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <memory>
#include <assert.h>

#include "MovePtr.h"

namespace measure
{

  MovePtr::MovePtr(std::string str) :
    description(str)
  {
  }
  
  MovePtr::~MovePtr()
  {
  }
  
  void MovePtr::doMeasure()
  {
    startMeasure();
    std::cout << description;
    
    // Measurement Body
    std::vector<int> p(1000), q;
    for(auto i = 0; i <= RepeatMax; i++)
      {
	q = std::move(p);  // Move
      }
    
    endMeasure();
  }
}  // namespace measure
