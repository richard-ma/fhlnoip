OPEN "robot.in0" FOR INPUT AS #1
OPEN "robot.out" FOR OUTPUT AS #2
DIM mp$(50), cm$
DIM r, c, i, j, sx, sy, ex, ey AS INTEGER
CLS
INPUT #1, r, c
FOR i = 1 TO r
        INPUT #1, mp$(i)
        FOR j = 1 TO c
                IF (MID$(mp$(i), j, 1) = "*") THEN
                        sx = i
                        sy = j
                END IF
        NEXT j
NEXT i
INPUT #1, cm$
FOR i = 1 TO LEN(cm$)
        ex = sx
        ey = sy
        IF (MID$(cm$, i, 1) = "N") THEN
                ex = sx - 1
        ELSE
                IF (MID$(cm$, i, 1) = "S") THEN
                        ex = sx + 1
                ELSE
                        IF (MID$(cm$, i, 1) = "W") THEN
                                ey = sy - 1
                        ELSE
                                ey = sy + 1
                        END IF
                END IF
        END IF
        'PRINT sx, sy, ex, ey
        IF (MID$(mp$(ex), ey, 1) <> "#") THEN
              sx = ex
              sy = ey
        END IF
        'PRINT sx, sy
NEXT i
PRINT #2, sx
PRINT #2, sy
CLOSE #1, #2

