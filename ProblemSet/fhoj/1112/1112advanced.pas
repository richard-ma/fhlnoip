program q1112;
var
    a, b, lcm, t: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(a, b);
    if (a > b) then
    begin
        t := a;
        a := b;
        b := t;
    end;

    lcm := a;
    while (lcm mod b <> 0) do
        inc(lcm, a);

    writeln(lcm);

    close(input);
    close(output);
end.
