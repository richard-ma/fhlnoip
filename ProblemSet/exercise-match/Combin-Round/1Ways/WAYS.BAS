CLS
OPEN "ways.in" FOR INPUT AS #1
OPEN "ways.out" FOR OUTPUT AS #2

INPUT #1, m, n, o
ans = m + n + o
PRINT #2, LTRIM$(STR$(ans))

CLOSE #1, #2
END

