program poly;
var
    max, i: integer;
    a: array[0..100] of integer;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(max);
    for i:=max downto 0 do
        read(a[i]);

    for i:=max downto 0 do
    begin
        if (a[i] = 0) then continue;
        if (a[i] > 0) and (i <> max) then write('+');
        if (a[i] < 0) then write('-');
        if (abs(a[i]) <> 1) and (i <> 0) then write(abs(a[i]));
        if (i <> 0) then write('x');
        if (i <> 0) and (i <> 1) then write('^', i);
        if (i = 0) then write(abs(a[i]));
    end;
    writeln;

    close(input);
    close(output);
end.
