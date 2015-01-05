program q1055;
var
    n: integer;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(n);
    writeln(n * 300);

    close(input);
    close(output);
end.
