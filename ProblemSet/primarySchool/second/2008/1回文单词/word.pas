program word;
var
    n, slen, flg, i: longint;
    s: ansistring;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(n);
    while (n > 0) do
    begin
        readln(s);
        slen := length(s);

        flg := 1;
        for i:=1 to (slen div 2) do
            if (s[i] <> s[slen-i+1]) then
            begin
                flg := 0;
                break;
            end;

        if (flg = 1) then 
            writeln('yes')
        else
            writeln('no');

        dec(n);
    end;

    close(input);
    close(output);
end.
