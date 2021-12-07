set(target brent_root)
add_library(${target} STATIC
  ${PROJECT_SOURCE_DIR}/src/brent_root.cpp
)
install(TARGETS ${target} DESTINATION lib)
