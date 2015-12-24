add_executable(Main main.cc JobMgr.cc)

target_link_libraries(Main
  measure
  )

add_subdirectory(measure)
