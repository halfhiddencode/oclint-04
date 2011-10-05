#include <cxxtest/TestSuite.h>
#include "mo/util/NPathComplexityMeasurement.h"
#include "mo/StringSourceCode.h"

class NPathComplexityMeasurementTest : public CxxTest::TestSuite { 
private:
  void checkNPath(string sourceCode, int expectedNPath);
  
public:
  void testEmptyMethod();
  
  // If Statement
  void testIfStatementWithConstantConditionAndEmptyThenCompoundStmt();
  void testIfStatementWithOneLogicAndOperatorConditionAndEmptyThenCompoundStmt();
  void testIfStatementWithOneLogicOrOperatorConditionAndEmptyThenCompoundStmt();
  void testIfStatementWithMultipleLogicAndOrOperatorsConditionAndEmptyThenCompoundStmt();
  void testIfElseStatementWithConstantConditionAndEmptyThenCompoundStmt();
  void testIfElseStatementWithOneLogicAndOperatorConditionAndEmptyThenCompoundStmt();
  void testIfElseStatementWithOneLogicOrOperatorConditionAndEmptyThenCompoundStmt();
  void testIfElseStatementWithMultipleLogicAndOrOperatorsConditionAndEmptyThenCompoundStmt();
  void testNestedIfStatement();
  void testNestedIfElseStatement();
  
  // While Statement
  void testWhileStatementWithConstantConditionAndEmptyCompoundStmt();
  void testWhileStatementWithOneLogicAndOperatorConditionAndEmptyCompoundStmt();
  void testWhileStatementWithOneLogicOrOperatorConditionAndEmptyCompoundStmt();
  
  // Do-While Statement
  void testDoWhileStatementWithConstantConditionAndEmptyCompoundStmt();
  void testDoWhileStatementWithOneLogicAndOperatorConditionAndEmptyCompoundStmt();
  void testDoWhileStatementWithOneLogicOrOperatorConditionAndEmptyCompoundStmt();
  
  // For Statement
  void testForStatementWithSimpleConditionAndEmptyCompoundStmt();
  void testForStatementWithOneLogicAndOperatorConditionAndEmptyCompoundStmt();
  
  // Switch Statement
  void testSwitchStatementWithSimpleConditionAndEmptyBody();
  void testSwitchStatementWithSimpleConditionAndOneCase();
  void testSwitchStatementWithSimpleConditionAndOneCaseOneDefault();
  void testSwitchStatementWithSimpleConditionAndTwoCasesOneDefault();
  void testSwitchStatementWithOneLogicAndOperatorConditionAndTwoCasesOneDefault();
  void testSwitchStatementWithSimpleConditionAndOneCaseOneIfOneDefault();
  void testSwitchStatementWithSimpleConditionAndOneCaseAsIfOneDefault();
  void testSwitchStatementWithSimpleConditionAndOneCaseAsTwoIfsOneDefault();
  
  // Conditional Operator
  void testBasicConditionalOperator();
  void testNastingConditionalOperator();
};
