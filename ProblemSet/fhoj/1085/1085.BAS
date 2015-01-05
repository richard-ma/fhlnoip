CLS
OPEN "1085.in" FOR INPUT AS #1
OPEN "1085.out" FOR OUTPUT AS #2

INPUT #1, n

ans = 0
FOR i = n - 1 TO 1 STEP -1
  ans = ans + i
NEXT i

PRINT #2, LTRIM$(STR$(ans))

CLOSE #1
CLOSE #2
END

