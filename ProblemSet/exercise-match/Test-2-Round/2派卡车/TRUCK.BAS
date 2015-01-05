CLS
OPEN "truck.in" FOR INPUT AS #1
OPEN "truck.out" FOR OUTPUT AS #2

INPUT #1, n, m

ans = n \ m
IF n MOD m <> 0 THEN
  ans = ans + 1
END IF

PRINT #2, LTRIM$(STR$(ans))

CLOSE #1, #2
END

