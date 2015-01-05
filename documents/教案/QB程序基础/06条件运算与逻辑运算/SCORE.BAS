CLS
OPEN "score.in" FOR INPUT AS #1
OPEN "score.out" FOR OUTPUT AS #2

INPUT #1, n

ans$ = ""
IF n >= 0 AND n < 60 THEN ans$ = "D"
IF n >= 60 AND n < 75 THEN ans$ = "C"
IF n >= 75 AND n < 90 THEN ans$ = "B"
IF n >= 90 AND n <= 100 THEN ans$ = "A"

PRINT #2, ans$

CLOSE #1, #2
END

