#include <iostream>
#include <memory>
#include "JobMgr.h"

int main(int argc, char** argv)
{
  std::cout << "Hello, World." << std::endl;

  JobMgr jobMgr;

  jobMgr.doJob();

  return 0;
}
