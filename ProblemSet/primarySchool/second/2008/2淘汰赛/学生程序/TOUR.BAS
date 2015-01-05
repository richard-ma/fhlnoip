OPEN "tour.in" FOR INPUT AS #1
OPEN "tour.out" FOR OUTPUT AS #2

DIM i, n AS INTEGER
INPUT #1, n
ans = 0
WHILE (n > 1)
        ans = ans + 1
        n = (n + 1) \ 2
WEND
PRINT #2, ans
CLOSE #1, #2

