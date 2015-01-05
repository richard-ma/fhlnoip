program q1115;
var
    i, x: longint;
    a: array[1..10] of longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    for i:=1 to 10 do
        read(a[i]);
    readln(x);

    writeln(a[x]);

    close(input);
    close(output);
end.
