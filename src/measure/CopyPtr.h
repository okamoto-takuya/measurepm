#ifndef MEASURE_COPY_PTR_H
#define MEASURE_COPY_PTR_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "MeasurePM.h"

namespace measure
{
  class CopyPtr : public MeasurePM
  {
  public:
    CopyPtr(std::string);
    ~CopyPtr();
    
  private:
    std::string description;
    
    
  private:
    void doMeasure();
    
  };
  
}  // namespace measure
#endif
