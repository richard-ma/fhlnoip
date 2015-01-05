program q1113;
var
    a, b, n: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(a, b);

    while (a mod b <> 0) do
    begin
        n := a;
        a := b;
        b := n mod b;
    end;

    writeln(b);

    close(input);
    close(output);
end.
