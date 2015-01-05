CLS
OPEN "1088.in" FOR INPUT AS #1
OPEN "1088.out" FOR OUTPUT AS #2

INPUT #1, n

IF n = 1 THEN ans = 1
IF n = 2 THEN ans = 2

t1 = 1: t2 = 2
FOR i = 3 TO n
  ans = t1 + t2
  t1 = t2
  t2 = ans
NEXT i
                           
PRINT #2, LTRIM$(STR$(ans))

CLOSE #1, #2
END

