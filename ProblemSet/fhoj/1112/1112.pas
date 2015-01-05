program q1112;
var
    s, m, n, ans: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(m, n);
    if (m < n) then
        s := n
    else
        s := m;

    ans := 0;
    repeat
        ans := ans + s;
    until ((ans mod m = 0) and (ans mod n = 0));

    writeln(ans);

    close(input);
    close(output);
end.
