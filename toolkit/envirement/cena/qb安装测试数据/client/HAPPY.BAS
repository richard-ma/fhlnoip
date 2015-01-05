CLS
OPEN "happy.in" FOR INPUT AS #1
OPEN "happy.out" FOR OUTPUT AS #2
CLOSE #1
PRINT #2, "Happy Day!"
CLOSE #2
END

