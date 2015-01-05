CLS
OPEN "word.in" FOR INPUT AS #1
OPEN "word.out" FOR OUTPUT AS #2

INPUT #1, n
DIM s$(n)
FOR i = 1 TO n
  INPUT #1, s$(i)
  flg = 1
  FOR j = 1 TO LEN(s$(i)) \ 2
    IF MID$(s$(i), j, 1) <> MID$(s$(i), LEN(s$(i)) - j + 1, 1) THEN
      flg = 0
      EXIT FOR
    END IF
  NEXT j
  IF flg = 1 THEN
    PRINT #2, "yes"
  ELSE
    PRINT #2, "no"
  END IF
NEXT i
CLOSE #1
CLOSE #2
END

