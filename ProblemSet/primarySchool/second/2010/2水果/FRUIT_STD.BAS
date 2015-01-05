OPEN "fruit.in" FOR INPUT AS #1
OPEN "fruit.out" FOR OUTPUT AS #2
INPUT #1, x, y, z
PRINT #2, x + y + z - 2
CLOSE #1, #2
END

