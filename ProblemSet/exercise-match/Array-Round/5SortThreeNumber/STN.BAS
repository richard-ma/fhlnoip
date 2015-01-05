CLS
OPEN "stn.in" FOR INPUT AS #1
OPEN "stn.out" FOR OUTPUT AS #2
INPUT #1, a, b, c
IF b < a THEN t = a: a = b: b = t
IF c < a THEN t = a: a = c: c = t
IF c < b THEN t = b: b = c: c = t
PRINT #2, LTRIM$(STR$(a)); b; LTRIM$(STR$(c))
CLOSE #1, #2
END

