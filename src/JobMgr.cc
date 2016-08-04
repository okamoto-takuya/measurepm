#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "JobMgr.h"
#include "measure/MeasurePM.h"
#include "measure/RawPtr.h"
#include "measure/UniquePtr.h"
#include "measure/SharedPtr.h"
#include "measure/MallocFree.h"
#include "measure/CopyPtr.h"
#include "measure/MovePtr.h"

JobMgr::JobMgr()
{
  std::cout << "JobMgr is created now." << std::endl;
}

void JobMgr::doJob()
{
  std::cout << "Yes, I'm starting my jobs." << std::endl;

  std::vector<measure::MeasurePM*> measureJobList;

  // Add each Measure Jobs.
  measureJobList.push_back(new measure::RawPtr    ("Use Raw Ptr case     :"));
  measureJobList.push_back(new measure::UniquePtr ("Use Unique Ptr case  :"));
  measureJobList.push_back(new measure::SharedPtr ("Use SHhred Ptr case  :"));
  measureJobList.push_back(new measure::MallocFree("Use Malloc/Free case :"));
  measureJobList.push_back(new measure::CopyPtr   ("Use Copy case        :"));
  measureJobList.push_back(new measure::MovePtr   ("Use Move case        :"));

  // Traverse Job List(container) by range-based for loop.
  for(auto&& jobs : measureJobList)
    {
      jobs->doMeasure();
    }
}
