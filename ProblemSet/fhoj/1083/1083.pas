program q1083;
var
    i, j, flg: integer;
    s: string;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(s);

    flg := 1;
    i := 1; j := length(s);
    while (i < j) do
    begin
        if (s[i] <> s[j]) then
        begin
            flg := 0;
            break;
        end;
        inc(i); dec(j);
    end;

    if (flg = 1) then writeln('yes')
    else writeln('no');

    close(input);
    close(output);
end.
