program apple;
var
    ans, i, t: longint;
    a: array[1..10] of longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    for i:=1 to 10 do
        read(a[i]);
    readln(t);
    t := t + 30;

    ans := 0;
    for i:=1 to 10 do
        if (a[i] <= t) then
            inc(ans);

    writeln(ans);

    close(input);
    close(output);
end.
