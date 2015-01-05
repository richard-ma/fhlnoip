OPEN "b.in" FOR INPUT AS #1
OPEN "b.out" FOR OUTPUT AS #2

INPUT #1, n

DIM cnt(n)
FOR i = 1 TO n
        INPUT #1, t
        cnt(t) = cnt(t) + 1
NEXT i

max = -1
e = 0

FOR i = 1 TO n
        IF cnt(i) = max THEN
                e = 0
        END IF
        IF cnt(i) > max THEN
                max = cnt(i)
                e = i
        END IF
NEXT i


WRITE #2, e
END

