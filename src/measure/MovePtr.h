#ifndef MEASURE_MOVE_PTR_H
#define MEASURE_MOVE_PTR_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "MeasurePM.h"

namespace measure
{
  class MovePtr : public MeasurePM
  {
  public:
    MovePtr(std::string);
    ~MovePtr();
    
  private:
    std::string description;
    
    
  private:
    void doMeasure();
    
  };
  
}  // namespace measure
#endif
