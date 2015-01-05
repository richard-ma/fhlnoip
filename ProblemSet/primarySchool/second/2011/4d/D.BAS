OPEN "d.in" FOR INPUT AS #1
OPEN "d.out" FOR OUTPUT AS #2

INPUT #1, a$

l = LEN(a$)

ans = 1
FOR i = 2 TO l
        FOR j = 1 TO l - i + 1
                e = j + i - 1
                w = 0
                FOR k = j TO e
                        IF MID$(a$, k, 1) <> MID$(a$, e - k + j, 1) THEN
                                w = 1
                        END IF
                NEXT k
                IF w = 0 THEN
                        ans = i
                END IF
        NEXT j
NEXT i

WRITE #2, ans
END

