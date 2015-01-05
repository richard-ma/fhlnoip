CLS
OPEN "nabi.in" FOR INPUT AS #1
OPEN "nabi.out" FOR OUTPUT AS #2

DIM a(3)
FOR i = 1 TO 3
  INPUT #1, a(i)
NEXT i

IF a(1) > a(2) THEN
  t = a(1)
  a(1) = a(2)
  a(2) = t
END IF

IF a(1) > a(3) THEN
  t = a(1)
  a(1) = a(3)
  a(3) = t
END IF

IF a(2) > a(3) THEN
  t = a(2)
  a(2) = a(3)
  a(3) = t
END IF

IF a(1) + 1 = a(2) AND a(2) + 1 = a(3) THEN
  PRINT #2, "TRUE"
ELSE
  PRINT #2, "FALSE"
END IF

CLOSE #1, #2
END

