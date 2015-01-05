CLS
OPEN "var.in" FOR INPUT AS #1
OPEN "var.out" FOR OUTPUT AS #2
INPUT #1, a, b, c
PRINT #2, LTRIM$(STR$(a))
PRINT #2, LTRIM$(STR$(b))
PRINT #2, LTRIM$(STR$(c))
CLOSE #1, #2
END

