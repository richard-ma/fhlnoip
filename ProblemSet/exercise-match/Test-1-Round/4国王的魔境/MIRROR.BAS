CLS
OPEN "mirror.in" FOR INPUT AS #1
OPEN "mirror.out" FOR OUTPUT AS #2

INPUT #1, s$

l = LEN(s$)
WHILE l MOD 2 = 0
  j = l
  FOR i = 1 TO l \ 2
    IF MID$(s$, i, 1) <> MID$(s$, j, 1) THEN
      PRINT #2, LTRIM$(STR$(l))
      CLOSE #1, #2
      END
    END IF
    j = j - 1
  NEXT i
  l = l \ 2
WEND

PRINT #2, LTRIM$(STR$(l))

CLOSE #1, #2
END

