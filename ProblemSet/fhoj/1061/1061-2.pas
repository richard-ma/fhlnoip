program q1061;
var
    a, b: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(a, b);

    a := a + b;
    b := a - b;
    a := a - b;

    writeln(a, ' ', b);

    close(input);
    close(output);
end.
