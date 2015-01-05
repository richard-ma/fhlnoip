program additio;
var
    buf: ansistring;
    i, len1, len2: longint;
    op1, op2: array[1..1024] of longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    read(buf);
    len1 := length(buf);
    for i:=1 to len1 do
        op1[len1 - i + 1] := ord(buf[i]) - ord('0');

    for i:=1 to len1 do
        write(op1[i]);

    close(input);
    close(output);
end.
