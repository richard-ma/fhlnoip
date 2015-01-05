CLS
OPEN "hello.in" FOR INPUT AS #1
OPEN "hello.out" FOR OUTPUT AS #2

PRINT #2, "hello"
PRINT #2, "hello"
PRINT #2, "hello"

CLOSE #1, #2
END