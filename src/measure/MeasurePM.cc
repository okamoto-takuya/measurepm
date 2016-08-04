#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <chrono>
#include <assert.h>

#include "MeasurePM.h"

namespace measure
{
  MeasurePM::MeasurePM() :
    RepeatMax(1000000)  // Measure Repeat count.
{
}
  
  MeasurePM::~MeasurePM()
  {
  }
  
  void MeasurePM::startMeasure()
  {
    startTime = std::chrono::high_resolution_clock::now();
  }
  
  void MeasurePM::endMeasure()
  {
    endTime = std::chrono::high_resolution_clock::now();

    auto spent_time = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime);
    std::cout << "  " << spent_time.count() << "[ms]" << std::endl;
  }
}  // namespace measure
