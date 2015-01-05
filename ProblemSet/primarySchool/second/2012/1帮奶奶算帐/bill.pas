program q1;
var
    n, i, p, c, ans: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(n);

    ans := 0;
    for i:=1 to n do
    begin
        readln(p, c);
        ans := ans + p * c;
    end;

    writeln(ans);

    close(input);
    close(output);
end.
