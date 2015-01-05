program score;
var
    n, m, i, j, t, ans: integer;
    id, score_arr: array[1..5000] of integer;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(n, m);
    for i:=1 to n do
        readln(id[i], score_arr[i]);

    for i:=1 to n-1 do
        for j:=i+1 to n do
        begin
            if (score_arr[i] < score_arr[j]) or ((score_arr[i] = score_arr[j]) and (id[i] > id[j])) then
            begin
                t := score_arr[i]; score_arr[i] := score_arr[j]; score_arr[j] := t;
                t := id[i]; id[i] := id[j]; id[j] := t;
            end;
        end;

    ans := trunc(m * 1.5);
    
    write(score_arr[ans], ' ');
    while (score_arr[ans] = score_arr[ans+1]) and (ans < n) do
        inc(ans);
    writeln(ans);

    for i:=1 to ans do
        writeln(id[i], ' ', score_arr[i]);

    close(input);
    close(output);
end.
