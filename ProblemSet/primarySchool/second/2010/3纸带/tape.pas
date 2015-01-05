program tape;
var
    n, i, max, sum: integer;
    a: array[1..100] of integer;
begin
    assign(input, 'tape.in');
    assign(output, 'tape.out');
    reset(input);
    rewrite(output);

    readln(n);
    for i:=1 to n do begin
        read(a[i]);
    end;

    sum := 0;
    max := 0;
    for i:=1 to n do begin
        sum := sum + a[i];
        if (sum > max) then max := sum;
        if (sum < 0) then sum := 0;
    end;

    writeln(max);

    close(input);
    close(output);
end.
