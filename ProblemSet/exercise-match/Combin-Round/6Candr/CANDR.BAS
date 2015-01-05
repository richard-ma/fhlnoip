CLS
OPEN "candr.in" FOR INPUT AS #1
OPEN "candr.out" FOR OUTPUT AS #2

INPUT #1, n
FOR i = 1 TO n
  INPUT #1, a

  IF a MOD 2 <> 0 THEN
    PRINT #2, "0 0"
  ELSE
    min = a \ 4
    IF a MOD 4 <> 0 THEN min = min + 1
    max = a \ 2

    PRINT #2, LTRIM$(STR$(min)); " "; LTRIM$(STR$(max))
  END IF

NEXT i

CLOSE #1
CLOSE #2
END

