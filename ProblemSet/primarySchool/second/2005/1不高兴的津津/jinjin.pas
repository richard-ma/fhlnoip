program jinjin;
var
  i, a, b, c, max, ans: integer;
  day: array[1..7] of integer;
begin
  assign(input, 'jinjin.in');
  assign(output, 'jinjin.out');
  reset(input);
  rewrite(output);

  for i:=1 to 7 do begin
    readln(a, b, c);
    day[i] := a + b + c;
  end;

  max := 0;
  ans := 0;
  for i:=1 to 7 do begin
    if (day[i] > 8) and (day[i] > max) then begin
      max := day[i];
      ans := i;
    end;
  end;

  writeln(ans);

  close(input);
  close(output);
end.