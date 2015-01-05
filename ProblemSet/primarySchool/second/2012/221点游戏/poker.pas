program q2;
var
    a, b, c, i, m, n, t: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(c);
    while (c > 0) do
    begin
        readln(m, n);
        a := 0;
        for i:=1 to m do
        begin
            read(t);
            a := a + t;
        end;
        if (a > 21) then a := 0;

        b := 0;
        for i:=1 to n do
        begin
            read(t);
            b := b + t;
        end;
        if (b > 21) then b := 0;

        if (a > b) then writeln('Win');
        if (a = b) then writeln('Draw');
        if (a < b) then writeln('Lose');

        dec(c);
    end;

    close(input);
    close(output);
end.
