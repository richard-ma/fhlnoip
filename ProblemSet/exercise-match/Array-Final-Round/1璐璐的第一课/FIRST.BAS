CLS
OPEN "first.in" FOR INPUT AS #1
OPEN "first.out" FOR OUTPUT AS #2

INPUT #1, a$
PRINT #2, a$

CLOSE #1, #2
END

