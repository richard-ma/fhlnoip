DIM s AS STRING
DIM le, flg, ca AS INTEGER
OPEN "word.in" FOR INPUT AS #1
OPEN "word.out" FOR OUTPUT AS #2
INPUT #1, n
FOR ca = 1 TO n

INPUT #1, s$
le = LEN(s$)
flg = 1
FOR i = 1 TO le \ 2
        IF (MID$(s$, i, 1) <> MID$(s$, le - i + 1, 1)) THEN
                flg = 0
        END IF
NEXT i
IF flg = 1 THEN
        PRINT #2, "yes"
ELSE
        PRINT #2, "no"
END IF

NEXT ca
CLOSE #1, #2

