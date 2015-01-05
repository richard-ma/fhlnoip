CLS
OPEN "word.in" FOR INPUT AS #1
OPEN "word.out" FOR OUTPUT AS #2

INPUT #1, a$
flg = 1
FOR i = 1 TO LEN(a$) \ 2
  IF MID$(a$, i, 1) <> MID$(a$, LEN(a$) - i + 1, 1) THEN
    flg = 0
    EXIT FOR
  END IF
NEXT i

IF flg = 1 THEN
  PRINT #2, "yes"
ELSE
  PRINT #2, "no"
END IF

CLOSE #1, #2
END

