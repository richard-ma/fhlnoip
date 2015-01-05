program game;
uses math;
var
    n, i, ans: integer;
    s: extended;
begin
    assign(input, 'game.in');
    assign(output, 'game.out');
    reset(input);
    rewrite(output);

    readln(n);

    i := 0;
    while (power(2, i) <= n) do inc(i);

    s := n - power(2, (i-1));

    ans := 1;
    for i:= 1 to trunc(s) do ans := ans + 2;

    writeln(ans);

    close(input);
    close(output);
end.
