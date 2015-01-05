program hat;
var
    arr: array[1..100] of integer;
    n, i, max, min, cmax, cmin, ans: integer;
begin
    assign(input, 'hat.in');
    assign(output, 'hat.out');
    reset(input);
    rewrite(output);

    readln(n);
    for i:=1 to n do begin
        read(arr[i]);
    end;

    max := -100;
    min := 100;
    for i:=1 to n do begin
        if (max < arr[i]) then max := arr[i];
        if (min > arr[i]) then min := arr[i];
    end;

    cmax := 0;
    cmin := 0;
    for i:=1 to n do begin
        if (arr[i] = max) then inc(cmax);
        if (arr[i] = min) then inc(cmin);
    end;

    ans := -1;
    if (max - min = 1) and (cmax + cmin = n) and (cmin = max) then begin
        ans := max;
    end;
    if (max = min) and (max <> 0) and (n - max = 1) then begin
        ans := n;
    end;
    if (max = 0) and (min = 0) then begin
        ans := 0;
    end;

    writeln(ans);

    close(input);
    close(output);
end.
