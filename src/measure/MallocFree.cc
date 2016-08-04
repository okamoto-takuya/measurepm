#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "MallocFree.h"

namespace measure
{

  MallocFree::MallocFree(std::string str) :
    description(str)
{
}

MallocFree::~MallocFree()
{
}

void MallocFree::doMeasure()
{
  startMeasure();
  std::cout << description;

  // Measurement Body
  for(auto i = 0; i <= RepeatMax; i++)
    {
      auto *p = (int *)malloc(sizeof(int));
      free(p);
    }

  endMeasure();
}
}  // namespace measure
