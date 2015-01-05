program q1114;
var
    a, b, i, ans:longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    a := 0;
    b := 1;

    i := 3;
    while (i <= 30) do
    begin
        ans := a + b;
        a := b;
        b := ans;

        inc(i);
    end;

    writeln(ans);

    close(input);
    close(output);
end.
