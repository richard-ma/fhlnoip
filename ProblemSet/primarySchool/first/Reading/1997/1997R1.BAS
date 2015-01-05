CLS
10 INPUT "Input larger than 1 number:"; n
15 FOR m = 2 TO INT(SQR(n))
20  IF n / m = INT(n / m) THEN 35
25 NEXT m
30 PRINT 1: END
35 PRINT n / m
40 END

