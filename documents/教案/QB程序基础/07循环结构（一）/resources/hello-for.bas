CLS
OPEN "hello.in" FOR INPUT AS #1
OPEN "hello.out" FOR OUTPUT AS #2

FOR i = 1 TO 100
  PRINT #2, "hello"
NEXT i

CLOSE #1, #2
END
