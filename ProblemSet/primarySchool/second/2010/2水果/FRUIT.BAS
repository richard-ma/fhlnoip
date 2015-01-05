CLS
OPEN "fruit.in" FOR INPUT AS #1
OPEN "fruit.out" FOR OUTPUT AS #2

INPUT #1, x, y, z

ans = (x - 1) + (y - 1) + (z - 1) + 1

PRINT #2, LTRIM$(STR$(ans))

CLOSE #1, #2
END

