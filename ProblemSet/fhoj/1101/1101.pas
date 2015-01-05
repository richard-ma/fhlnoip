program q1101;
var
    i, a, b, x, y: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    for i:=10 to 99 do
    begin
        x := i;
        a := x div 10;
        b := x mod 10;
        y := b * 10 + a;

        if (y - x = 36) then writeln(x);
    end;

    close(input);
    close(output);
end.
