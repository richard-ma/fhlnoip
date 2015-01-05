program q112;
var
    a, b, n, i: integer;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(n);
    for i:=1 to n do
    begin
        readln(a, b);
        writeln(a+b);
    end;

    close(input);
    close(output);
end.
