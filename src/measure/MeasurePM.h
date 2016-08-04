#ifndef MEASURE_MEASURE_P_M_H
#define MEASURE_MEASURE_P_M_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <chrono>
#include <assert.h>


namespace measure
{
  class MeasurePM
  {
  private:
    
  protected:
    int RepeatMax;
    std::chrono::high_resolution_clock::time_point startTime, endTime;
    void startMeasure();
    void endMeasure();
    
  public:
    MeasurePM();
    virtual ~MeasurePM();
    virtual void doMeasure()=0;
  };
  
}  // namespace measure
#endif
