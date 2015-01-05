program xyz;
var
    c, x, y, z, r: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(r);
    c := 0;
    for x:=0 to 32 do
        for y:=0 to 32 do
            for z:=0 to 32 do
                if (sqr(x) + sqr(y) + sqr(z) = r) then inc(c);

    writeln(c);

    close(input);
    close(output);
end.
