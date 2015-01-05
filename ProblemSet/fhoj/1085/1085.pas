program q1085;
var
    n, i, ans: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(n);

    ans := 0;
    for i:=n-1 downto 1 do
        ans := ans + i;

    writeln(ans);

    close(input);
    close(output);
end.
