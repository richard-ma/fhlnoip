program q1110;
var
    x: longint;
    yes: boolean;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    x := 0;
    repeat
        yes := true; inc(x, 7);

        if (x mod 2 <> 1) then yes := false;
        if (x mod 3 <> 1) then yes := false;
        if (x mod 4 <> 1) then yes := false;
        if (x mod 5 <> 1) then yes := false;
        if (x mod 6 <> 1) then yes := false;
    until yes;

    writeln(x);

    close(input);
    close(output);
end.
