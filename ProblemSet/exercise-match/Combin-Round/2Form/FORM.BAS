CLS
OPEN "form.in" FOR INPUT AS #1
OPEN "form.out" FOR OUTPUT AS #2

INPUT #1, a, b
PRINT #2, LTRIM$(STR$(a * b))

CLOSE #1, #2
END

