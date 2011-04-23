#include "mo/util/CursorUtilTest.h"

CXCursor getNullCursor() {
  return clang_getNullCursor();
}

CXCursor getDeclCursor() {
  CXCursor cursor = { CXCursor_FirstDecl, { (void*)1, 0, 0 } };
  return cursor;
}

CXCursor getStmtCursor() {
  CXCursor cursor = { CXCursor_FirstStmt, { 0, (void*)1, 0 } };
  return cursor;
}

CXCursor getExprCursor() {
  CXCursor cursor = { CXCursor_FirstExpr, { 0, (void*)1, 0 } };
  return cursor;
}

void CursorUtilTest::testGetDeclWithDeclCursor() {
  CXCursor cursor = getDeclCursor();
  Decl *decl = CursorUtil::getDecl(cursor);
  TS_ASSERT(decl);
}

void CursorUtilTest::testGetDeclWithNotDeclCursor() {
  CXCursor cursor = getStmtCursor();
  Decl *decl = CursorUtil::getDecl(cursor);
  TS_ASSERT(!decl);
}

void CursorUtilTest::testGetDeclWithNullCursor() {
  CXCursor cursor = getNullCursor();
  Decl *decl = CursorUtil::getDecl(cursor);
  TS_ASSERT(!decl);
}

void CursorUtilTest::testGetStmtWithStmtCursor() {
  CXCursor cursor = getStmtCursor();
  Stmt *stmt = CursorUtil::getStmt(cursor);
  TS_ASSERT(stmt);
}

void CursorUtilTest::testGetStmtWithNotStmtCursor() {
  CXCursor cursor = getDeclCursor();
  Stmt *stmt = CursorUtil::getStmt(cursor);
  TS_ASSERT(!stmt);
}

void CursorUtilTest::testGetStmtWithNullCursor() {
  CXCursor cursor = getNullCursor();
  Stmt *stmt = CursorUtil::getStmt(cursor);
  TS_ASSERT(!stmt);
}

void CursorUtilTest::testGetExprWithExprCursor() {
  CXCursor cursor = getExprCursor();
  Expr *expr = CursorUtil::getExpr(cursor);
  TS_ASSERT(expr);
}

void CursorUtilTest::testGetExprWithNotExprCursor() {
  CXCursor cursor = getDeclCursor();
  Expr *expr = CursorUtil::getExpr(cursor);
  TS_ASSERT(!expr);
}

void CursorUtilTest::testGetExprWithNullCursor() {
  CXCursor cursor = getNullCursor();
  Expr *expr = CursorUtil::getExpr(cursor);
  TS_ASSERT(!expr);
}

void CursorUtilTest::testGetExprWithStmtCursor() {
  CXCursor cursor = getStmtCursor();
  Expr *expr = CursorUtil::getExpr(cursor);
  TS_ASSERT(!expr);
}
