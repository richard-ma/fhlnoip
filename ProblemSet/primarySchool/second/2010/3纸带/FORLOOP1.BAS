CLS

DIM array(10)
FOR i = 1 TO 10
  array(i) = i - 1
NEXT i

REM Array Length
n = 4

REM ///////////////////////////////////
REM Your Code Start
REM ///////////////////////////////////


FOR i = 1 TO n
  FOR j = 1 TO i
    PRINT array(j);
  NEXT j
  PRINT
NEXT i

REM ///////////////////////////////////
REM Your Code End
REM ///////////////////////////////////

END

