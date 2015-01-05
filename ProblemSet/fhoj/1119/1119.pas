program q1119;
var
    i, n, s: longint;
    a: array[1..10] of longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(n);
    for i:=1 to n do
        read(a[i]);
    readln(s);

    for i:=1 to n do
        if (a[i] >= s) then writeln(i);

    close(input);
    close(output);
end.
