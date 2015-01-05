CLS
OPEN "group.in" FOR INPUT AS #1
OPEN "group.out" FOR OUTPUT AS #2

INPUT #1, n, min, max
DIM a(n)
s = 0
FOR i = 1 TO n
  INPUT #1, a(i)
  s = s + a(i)
NEXT i

IF s > n * max OR s < n * min THEN
  PRINT #2, LTRIM$(STR$(-1))
ELSE
  ans1 = 0
  FOR i = 1 TO n
    IF a(i) < min THEN ans1 = ans1 + min - a(i)
  NEXT i

  ans2 = 0
  FOR i = 1 TO n
    IF a(i) > max THEN ans2 = ans2 + a(i) - max
  NEXT i

  IF ans1 > ans2 THEN
    ans = ans1
  ELSE
    ans = ans2
  END IF
  PRINT #2, LTRIM$(STR$(ans))
END IF

CLOSE #1
CLOSE #2
END

