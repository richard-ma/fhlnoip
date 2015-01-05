CLS
OPEN "bee.in" FOR INPUT AS #1
OPEN "bee.out" FOR OUTPUT AS #2
INPUT #1, a
x = 0
x1 = 1
x2 = 1
IF a = 1 OR a = 2 THEN
  PRINT #2, "1"
  END
END IF
FOR i = 3 TO a
  x = x1 + x2
  x2 = x1
  x1 = x
NEXT i
PRINT #2, LTRIM$(STR$(x))
CLOSE #1, #2
END

