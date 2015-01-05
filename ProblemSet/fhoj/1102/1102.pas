program q1102;
var
    i, x, a, b: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    for i:=32 to 99 do
    begin
        x := i * i;
        a := x mod 100;
        b := x div 100;

        if (a + b = i) then writeln(x);
    end;

    close(input);
    close(output);
end.
