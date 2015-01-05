CLS
OPEN "1086.in" FOR INPUT AS #1
OPEN "1086.out" FOR OUTPUT AS #2

INPUT #1, n
FOR k = 1 TO n
  INPUT #1, s$
  flg = 1
  i = 1: j = LEN(s$)
  WHILE i < j
    IF MID$(s$, i, 1) <> MID$(s$, j, 1) THEN
      flg = 0
    END IF
    i = i + 1: j = j - 1
  WEND
  IF flg = 1 THEN PRINT #2, s$
NEXT k

CLOSE #1
CLOSE #2
END

