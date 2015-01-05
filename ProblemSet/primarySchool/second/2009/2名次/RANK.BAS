CLS
OPEN "rank.in" FOR INPUT AS #1
OPEN "rank.out" FOR OUTPUT AS #2

INPUT #1, n
cnt = 1
INPUT #1, b
FOR i = 1 TO n - 1
  INPUT #1, t
  IF t > b THEN cnt = cnt + 1
NEXT i

PRINT #2, LTRIM$(STR$(cnt))

CLOSE #1
CLOSE #2
END

