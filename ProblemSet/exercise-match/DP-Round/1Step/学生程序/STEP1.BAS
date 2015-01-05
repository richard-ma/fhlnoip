CLS
OPEN "step.in" FOR INPUT AS #1
OPEN "step.out" FOR OUTPUT AS #2
INPUT #1, a
x = 0
x1 = 1
x2 = 2
IF a = 1 OR a = 2 THEN
  PRINT #2, a
  END
END IF
FOR i = 3 TO a
  x = x1 + x2
  x1 = x2
  x2 = x
NEXT i
PRINT #2, LTRIM$(STR$(x))
END


