CLS
OPEN "year.in" FOR INPUT AS #1
OPEN "year.out" FOR OUTPUT AS #2

INPUT #1, s$

FOR i = LEN(s$) TO 1 STEP -1
  PRINT #2, MID$(s$, i, 1);
NEXT i
PRINT #2,

CLOSE #1, #2
END

