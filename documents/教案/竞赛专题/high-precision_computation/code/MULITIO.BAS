CLS
OPEN "mulitio.in" FOR INPUT AS #1
OPEN "mulitio.out " FOR OUTPUT AS #2
INPUT #1, a$, b$
lena = LEN(a$)
lenb = LEN(b$)
n = lena + lenb
DIM a(n): DIM b(n)
FOR i = 1 TO lena
  a(i) = VAL(MID$(a$, lena - i + 1, 1))
NEXT i
FOR i = 1 TO lenb
  b(i) = VAL(MID$(b$, lenb - i + 1, 1))
NEXT i
DIM c(n)
FOR i = 1 TO n
  c(i) = 0
NEXT i
FOR i = 1 TO lena
    FOR j = 1 TO lenb
        c(i + j - 1) = a(i) * b(j) + c(i + j - 1)
        IF c(i + j - 1) >= 10 THEN
            c(i + j - 1 + 1) = c(i + j - 1 + 1) + c(i + j - 1) \ 10
            c(i + j - 1) = c(i + j - 1) MOD 10
        END IF
    NEXT j
NEXT i

FOR i = n TO 1 STEP -1
  IF c(i) > 0 THEN EXIT FOR
NEXT i
FOR j = i TO 1 STEP -1
  PRINT #2, LTRIM$(STR$(c(j)));
NEXT j
PRINT #2,

CLOSE #1, #2
END

