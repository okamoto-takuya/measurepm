#ifndef MEASURE_SHARED_PTR_H
#define MEASURE_SHARED_PTR_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "MeasurePM.h"

namespace measure
{
  class SharedPtr : public MeasurePM
  {
  public:
    SharedPtr(std::string);
    ~SharedPtr();
    
  private:
    std::string description;
    
    
  private:
    void doMeasure();
    
  };
  
}  // namespace measure
#endif
