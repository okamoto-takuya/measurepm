#ifndef JOB_MGR_H
#define JOB_MGR_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "measure/MeasurePM.h"

class JobMgr
{
public:
  JobMgr();
  ~JobMgr() = default;
  
  void doJob();
  
 private:
};
#endif
