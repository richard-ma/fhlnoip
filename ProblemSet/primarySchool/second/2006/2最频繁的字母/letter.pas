program letter;
var
    buf: string;
    i, max: integer;
    cnt: array[1..32] of integer;
begin
    assign(input, 'letter.in');
    assign(output, 'letter.out');
    reset(input);
    rewrite(output);

    readln(buf);

    for i:=1 to 32 do cnt[i] := 0;

    for i:= 1 to length(buf) do begin
        inc(cnt[ord(buf[i]) - ord('a') + 1]);
    end;

    max := 0;
    for i:=1 to 26 do begin
        if (max < cnt[i]) then max := cnt[i];
    end;

    for i:=1 to length(buf) do begin
        if (cnt[i] = max) then write(chr(i + ord('a') - 1));
    end;
    writeln;

    close(input);
    close(output);
end.
