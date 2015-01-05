program q1078;
var
    a, b: integer;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    while (not seekeof) do
    begin
        readln(a, b);
        writeln(a + b);
    end;

    close(input);
    close(output);
end.
