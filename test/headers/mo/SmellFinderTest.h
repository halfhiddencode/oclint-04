#include <cxxtest/TestSuite.h>
#include "mo/SmellFinder.h"

class SmellFinderTest : public CxxTest::TestSuite { 
private:
  SmellFinder *_finder;
  CXIndex _index;
  CXTranslationUnit _translationUnit;
  
public:
  void setUp();
  void tearDown();
  void testHasNoSmell();
  void testHasSmellWithEmptyTranslationUnit();
  void testReportViolations();
};
