CLS
OPEN "string.in" FOR INPUT AS #1
OPEN "string.out" FOR OUTPUT AS #2
INPUT #1, s$
INPUT #1, m, n
PRINT #2, MID$(s$, m, n)
CLOSE #1, #2
END

