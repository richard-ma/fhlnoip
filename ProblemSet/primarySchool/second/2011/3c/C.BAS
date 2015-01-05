OPEN "c.in" FOR INPUT AS #1
OPEN "c.out" FOR OUTPUT AS #2

INPUT #1, v

cnt = 0

10 :
IF v >= 50 THEN
        cnt = cnt + 1
        v = v - 50
ELSEIF v >= 20 THEN
        cnt = cnt + 1
        v = v - 20
ELSEIF v >= 10 THEN
        cnt = cnt + 1
        v = v - 10
ELSEIF v >= 5 THEN
        cnt = cnt + 1
        v = v - 5
ELSEIF v >= 1 THEN
        cnt = cnt + 1
        v = v - 1
END IF
IF v > 0 THEN GOTO 10

WRITE #2, cnt
END

