program q113;
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
        if (a = 0) and (b = 0) then
            break;
        writeln(a+b);
    end;

    close(input);
    close(output);
end.
