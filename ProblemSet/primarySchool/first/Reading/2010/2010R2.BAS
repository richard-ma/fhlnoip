DECLARE SUB foo (a AS INTEGER, b AS INTEGER, c AS INTEGER)
a% = 3
b% = 1
c% = 2
CALL foo(a%, b%, c%)

SUB foo (a AS INTEGER, b AS INTEGER, c AS INTEGER)
  IF a > b THEN
    CALL foo(c, a, b)
  ELSE
    PRINT a; ","; b; ","; c
  END IF
END SUB

