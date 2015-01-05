CLS
OPEN "2010r3.ans" FOR OUTPUT AS #2
DIM A(3, 4), B(4, 3)
FOR X = 1 TO 3
FOR Y = 1 TO 4
  A(X, Y) = X - Y
NEXT Y, X
FOR X = 4 TO 1 STEP -1
FOR Y = 1 TO 3
  B(X, Y) = A(Y, X)
NEXT Y, X
PRINT #2, B(3, 2)
END

