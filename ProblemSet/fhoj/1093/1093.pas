program q1093;
var
    a, b, c, ans: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    read(a, b, c);

    ans := 0;
    if ((a + b > c) and (a + c > b) and (b + c > a)) then ans := a + b + c;

    if (ans = 0) then
        writeln('Can''t')
    else
        writeln(ans);

    close(input);
    close(output);
end.
