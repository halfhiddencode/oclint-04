add_library(OCLintCoreTest
  ClangInstanceTest.cpp
  SmellFinderTest.cpp
  ViolationSetTest.cpp
  RuleSetTest.cpp
  RuleConfigurationTest.cpp
  )

add_subdirectory(exception)
add_subdirectory(reporter)
add_subdirectory(rule)
add_subdirectory(helper)
