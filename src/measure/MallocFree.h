#ifndef MEASURE_MALLOC_FREE_H
#define MEASURE_MALLOC_FREE_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "MeasurePM.h"

namespace measure
{
  class MallocFree : public MeasurePM
  {
  public:
    MallocFree(std::string);
    ~MallocFree();
    
  private:
    std::string description;
    
    
  private:
    void doMeasure();
    
  };
  
}  // namespace measure
#endif
