program bus;
var
    i, n, a, b, sum, ans: longint;
    arr: array[1..100] of longint;
begin
    assign(input, 'bus.in');
    assign(output, 'bus.out');
    reset(input);
    rewrite(output);

    readln(n);
    for i:=1 to n do readln(arr[i]);
    readln(a, b);

    sum := 0;
    for i:=1 to n do sum := sum + arr[i];

    ans := sum + a - b;

    writeln(ans);

    close(input);
    close(output);
end.
