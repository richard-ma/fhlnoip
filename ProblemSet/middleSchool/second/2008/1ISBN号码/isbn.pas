program isbn;
var
    buf: string;
    i, sum: integer;
    a: array[1..9] of integer;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(buf);
    a[1] := ord(buf[1]) - 48;
    a[2] := ord(buf[3]) - 48;
    a[3] := ord(buf[4]) - 48;
    a[4] := ord(buf[5]) - 48;
    a[5] := ord(buf[7]) - 48;
    a[6] := ord(buf[8]) - 48;
    a[7] := ord(buf[9]) - 48;
    a[8] := ord(buf[10]) - 48;
    a[9] := ord(buf[11]) - 48;

    sum := 0;
    for i:=1 to 9 do
        sum := sum + a[i] * i;
    sum := sum mod 11;

    if (sum = 10) and (buf[13] = 'X') then writeln('Right')
    else if (sum = ord(buf[13]) - 48) then writeln('Right')
    else
    begin
        for i:=1 to 12 do write(buf[i]);
        if (sum = 10) then write('X')
        else write(sum);
    end;

    close(input);
    close(output);
end.
