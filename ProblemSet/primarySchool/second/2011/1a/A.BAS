
OPEN "a.in" FOR INPUT AS #1
OPEN "a.out" FOR OUTPUT AS #2

INPUT #1, n, m

sum1 = 0
sum2 = 0
FOR i = 1 TO n
        INPUT #1, t
        sum1 = sum1 + t
NEXT i
FOR i = 1 TO m
        INPUT #1, t
        sum2 = sum2 + t
NEXT i

IF sum1 > sum2 THEN
        WRITE #2, 1
ELSEIF sum1 < sum2 THEN
        WRITE #2, 2
ELSE WRITE #2, 0
END IF


CLOSE #1, #2

