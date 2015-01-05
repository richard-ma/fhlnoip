CLS
OPEN "strm.in" FOR INPUT AS #1
OPEN "strm.out" FOR OUTPUT AS #2
INPUT #1, m, n
DIM a$(m)
FOR i = 1 TO m
  INPUT #1, a$(i)
NEXT i
INPUT #1, p, k
b$ = a$(p)
PRINT #2, MID$(b$, k, 1)
END

