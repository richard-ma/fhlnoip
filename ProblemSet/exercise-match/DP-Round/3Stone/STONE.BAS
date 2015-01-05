CLS
OPEN "stone.in" FOR INPUT AS #1
OPEN "stone.out" FOR OUTPUT AS #2

INPUT #1, n, ch1$

IF ch1$ = "M" THEN
  ch2$ = "L"
ELSE
  ch2$ = "M"
END IF

DIM a(n)
a(1) = 1
a(2) = 1

FOR i = 3 TO n
  IF a(i - 1) = 1 AND a(i - 2) = 1 THEN
    a(i) = 0
  ELSE
    a(i) = 1
  END IF
NEXT i

IF a(n) = 1 THEN
  PRINT #2, ch1$
ELSE
  PRINT #2, ch2$
END IF

CLOSE #1, #2
END

