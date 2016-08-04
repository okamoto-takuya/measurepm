#ifndef MEASURE_UNIQUE_PTR_H
#define MEASURE_UNIQUE_PTR_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "MeasurePM.h"

namespace measure
{
  class UniquePtr : public MeasurePM
  {
  public:
    UniquePtr(std::string);
    ~UniquePtr();
    
  private:
    std::string description;
    
    
  private:
    void doMeasure();
    
  };
  
}  // namespace measure
#endif
