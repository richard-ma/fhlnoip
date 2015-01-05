CLS
OPEN "tour.in" FOR INPUT AS #1
OPEN "tour.out" FOR OUTPUT AS #2

INPUT #1, n

i = 0
WHILE 2 ^ i < n
  i = i + 1
WEND

PRINT #2, LTRIM$(STR$(i))

CLOSE #1
CLOSE #2
END

