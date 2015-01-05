program count;
var
    i, j, n: longint;
    cnt: array[1..16] of integer;
    buf: string;
begin
    assign(input, 'count.in');
    assign(output, 'count.out');
    reset(input);
    rewrite(output);

    readln(n);

    for i:=1 to 10 do cnt[i] := 0;

    for i:=1 to n do begin
        str(i, buf);
        for j:=1 to length(buf) do begin
            inc(cnt[ord(buf[j]) - ord('0') + 1]);
        end;
    end;

    write(cnt[1]);
    for i:=2 to 10 do begin
        write(' '); write(cnt[i]);
    end;
    writeln();

    close(input);
    close(output);
end.
