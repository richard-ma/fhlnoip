program words;
var
    n, len, flg, i: longint;
    origin, fact: ansistring;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(n);
    while (n > 0) do
    begin
        readln(origin);
        readln(fact);

        len := length(fact);

        flg := 1;
        for i:=1 to len do
            if ((origin[i] <> fact[i]) and 
                ((i = 1) or (i = len) or
                ((i > 0) and (fact[i-1] = ' ')) or
                ((i < len) and (fact[i+1] = ' ')))) then
            begin
                flg := 0;
                break;
            end;

        if (flg = 1) then
            writeln('Yes')
        else
            writeln('No');

        dec(n);
    end;

    close(input);
    close(output);
end.
