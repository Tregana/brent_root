set(target_name brent_root_test)
set(test_case
  ${PROJECT_SOURCE_DIR}/test/brent_root.cpp
)
create_test_sourcelist(test_sources test_main.cpp ${test_case})
add_executable(${target_name} ${test_sources})
target_link_libraries(${target_name}
  PRIVATE brent_root
)
foreach(test IN LISTS test_case)
  add_test(NAME ${test} COMMAND ${target_name} ${test})
endforeach()
install(TARGETS ${target_name} DESTINATION test)
