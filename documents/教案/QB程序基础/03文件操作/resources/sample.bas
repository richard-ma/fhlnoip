CLS

OPEN "sample.in" FOR INPUT AS #1
OPEN "sample.out" FOR OUTPUT AS #2

INPUT #1, s$
PRINT #2, s$

CLOSE #1, #2

END
