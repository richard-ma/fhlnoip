OPEN "hat.in" FOR INPUT AS #1
OPEN "hat.out" FOR OUTPUT AS #2
INPUT #1, n
DIM a(n)
FOR i = 1 TO n
  INPUT #1, a(i)
  s = s + a(i)
  IF a(i) > n - 1 THEN flag = 1
NEXT i
IF (s MOD (n - 1) = 0) AND (flag = 0) THEN PRINT #2, (s \ (n - 1)) ELSE PRINT #2, -1
CLOSE #1, #2
END

