program q114;
var
    n, i, sum, t: integer;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    while (not seekeof) do
    begin
        read(n);
        if (n = 0) then break;

        sum := 0;
        for i:=1 to n do
        begin
            read(t);
            sum := sum + t;
        end;
        writeln(sum);
    end;

    close(input);
    close(output);
end.
