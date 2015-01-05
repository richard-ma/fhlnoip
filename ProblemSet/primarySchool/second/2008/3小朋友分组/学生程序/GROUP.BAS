OPEN "group.in" FOR INPUT AS #1
OPEN "group.out" FOR OUTPUT AS #2
DIM n, i, j, mi, ma AS INTEGER
DIM a(100) AS INTEGER
INPUT #1, n, mi, ma
sum = 0
FOR i = 1 TO n
      INPUT #1, a(i)
      sum = sum + a(i)
NEXT i
IF sum < n * mi OR sum > n * ma THEN
        PRINT #2, -1
ELSE
      s1 = 0
      s2 = 0
      FOR i = 1 TO n
        IF a(i) < mi THEN s1 = s1 + mi - a(i)
        IF a(i) > ma THEN s2 = s2 + a(i) - ma
      NEXT i
      IF s1 < s2 THEN
        PRINT #2, s2
      ELSE
        PRINT #2, s1
      END IF
END IF
CLOSE #1, #2

