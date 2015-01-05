program q1056;
var
    r, s, c: real;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(r);
    c := 2 * Pi * r;
    s := Pi * r * r;
    writeln(c);
    writeln(s);

    close(input);
    close(output);
end.
