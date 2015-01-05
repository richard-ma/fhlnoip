CLS
OPEN "even.in" FOR INPUT AS #1
OPEN "even.out" FOR OUTPUT AS #2
INPUT #1, n
DIM a(n)
FOR i = 1 TO n
  INPUT #1, a(i)
NEXT i
s = 0: q = 0
FOR i = 1 TO n - 1
  FOR j = i + 1 TO n
    s = a(i) + a(j)
    IF s / 2 MOD 2 = 1 THEN
      IF s > q THEN
        q = s
      END IF
    END IF
  NEXT j
NEXT
IF q <> 0 THEN
  PRINT #2, LTRIM$(STR$(q))
ELSE
  PRINT #2, LTRIM$(STR$(-1))
END IF
CLOSE #1, #2
END

