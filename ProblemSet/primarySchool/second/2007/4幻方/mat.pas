program mat;
var
    i, sum1, sum2, sum3, ans: integer;
    arr: array[1..10] of integer;
begin
    assign(input, 'mat.in');
    assign(output, 'mat.out');
    reset(input);
    rewrite(output);

    for i:=1 to 9 do read(arr[i]);

    sum1 := arr[1] + arr[2] + arr[3];
    sum2 := arr[4] + arr[5] + arr[6];
    sum3 := arr[7] + arr[8] + arr[9];

    if (sum1 > sum2) then ans := sum1 - sum2 - 1;
    if (sum1 < sum2) then ans := sum2 - sum1 - 1;
    if (sum1 = sum2) then ans := sum1 - sum3 - 1;

    writeln(ans);

    close(input);
    close(output);
end.
