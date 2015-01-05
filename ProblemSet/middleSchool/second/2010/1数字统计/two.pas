program q1784;
var
    i, j, a, b, ans: integer;
    s: string;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(a, b);

    ans := 0;
    for i:=a to b do
    begin
        str(i, s);
        for j:=1 to length(s) do
            if (s[j] = '2') then inc(ans);
    end;

    writeln(ans);

    close(input);
    close(output);
end.
