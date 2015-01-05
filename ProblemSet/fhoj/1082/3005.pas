program q115;
var
    n, c, i, j, sum, t: integer;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(c);
    for i:=1 to c do
    begin
        read(n);
        sum := 0;
        for j:=1 to n do
        begin
            read(t);
            sum := sum + t;
        end;
        writeln(sum);
    end;

    close(input);
    close(output);
end.
