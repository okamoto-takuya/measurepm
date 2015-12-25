#ifndef MEASURE_RAW_PTR_H
#define MEASURE_RAW_PTR_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "MeasurePM.h"

namespace measure
{
  class RawPtr : public MeasurePM
  {
  public:
    RawPtr(std::string);
    ~RawPtr();
    
  private:
    std::string description;
    
    
  private:
    void doMeasure();
    
  };
  
}  // namespace measure
#endif
