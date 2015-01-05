program q1109;
var
    m, n, s:longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(m, n);

    if (m > n) then
        s := n
    else 
        s := m;

    inc(s);
    repeat
        dec(s);
    until ((m mod s = 0) and (n mod s = 0));

    writeln(s);

    close(input);
    close(output);
end.
