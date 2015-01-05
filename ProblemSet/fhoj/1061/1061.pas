program q1061;
var
    a, b, c: integer;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(a, b);

    c := a;
    a := b;
    b := c;

    writeln(a, ' ', b);

    close(input);
    close(output);
end.
