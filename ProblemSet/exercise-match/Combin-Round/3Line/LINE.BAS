CLS
OPEN "line.in" FOR INPUT AS #1
OPEN "line.out" FOR OUTPUT AS #2

INPUT #1, a
PRINT #2, LTRIM$(STR$(2 ^ a))

CLOSE #1, #2
END

