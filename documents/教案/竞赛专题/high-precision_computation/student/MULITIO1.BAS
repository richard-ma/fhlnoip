CLS
OPEN "mulitio.in" FOR INPUT AS #1
OPEN "mulitio.out" FOR OUTPUT AS #2
INPUT #1, a$: INPUT #1, b$
n = LEN(a$) + LEN(b$)
DIM c(n): DIM d(n)
FOR i = 1 TO n
  c(i) = 0: d(i) = 0
NEXT i
FOR i = LEN(a$) TO 1 STEP -1
  c(LEN(a$) - i + 1) = VAL(MID$(a$, i, 1))
NEXT i
FOR i = LEN(b$) TO 1 STEP -1
  d(LEN(b$) - i + 1) = VAL(MID$(b$, i, 1))
NEXT i
DIM s(n)
FOR i = 1 TO LEN(a$)
  FOR j = 1 TO LEN(b$)
    s(i + j - 1) = s(i + j - 1) + c(i) * d(j)
    IF s(i + j - 1) >= 10 THEN
      s(i + j) = s(i + j) + s(i + j - 1) \ 10
      s(i + j - 1) = s(i + j - 1) MOD 10
    END IF
  NEXT j
NEXT i
IF s(n) = 0 THEN
  FOR i = n - 1 TO 1 STEP -1
    PRINT #2, LTRIM$(STR$(s(i)));
  NEXT i
ELSE
  FOR i = n TO 1 STEP -1
    PRINT #2, LTRIM$(STR$(s(i)));
  NEXT i
END IF
END

