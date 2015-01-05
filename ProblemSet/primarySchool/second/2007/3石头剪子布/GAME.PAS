program game;
var
  s1, s2, a, b: string;
  arra, arrb: array[1..30] of integer;
  i, n, suma, sumb: integer;
begin
  assign(input, 'game.in');
  assign(output, 'game.out');
  reset(input);
  rewrite(output);

  readln(n);
  readln(s1);
  readln(s2);

  for i:=1 to n do begin
    a := copy(s1, i, 1);
    b := copy(s2, i, 1);

    if (a = 'R') then begin
      if (b = 'R') then begin
        arra[i] := 1; arrb[i] := 1;
      end;
      if (b = 'S') then begin
        arra[i] := 2; arrb[i] := 0;
      end;
      if (b = 'P') then begin
        arra[i] := 0; arrb[i] := 2;
      end;
    end;

    if (a = 'S') then begin
      if (b = 'R') then begin
        arra[i] := 0; arrb[i] := 2;
      end;
      if (b = 'S') then begin
        arra[i] := 1; arrb[i] := 1;
      end;
      if (b = 'P') then begin
        arra[i] := 2; arrb[i] := 0;
      end;
    end;

    if (a = 'P') then begin
      if (b = 'R') then begin
        arra[i] := 2; arrb[i] := 0;
      end;
      if (b = 'S') then begin
        arra[i] := 0; arrb[i] := 2;
      end;
      if (b = 'P') then begin
        arra[i] := 1; arrb[i] := 1;
      end;
    end;
  end;

  suma := 0;
  for i:=1 to n do begin
    suma := suma + arra[i];
  end;

  sumb := 0;
  for i:=1 to n do begin
    sumb := sumb + arrb[i];
  end;

  if (suma > sumb) then begin
    writeln('A ', suma);
  end;
  if (suma = sumb) then begin
    writeln('TIE ', suma);
  end;
  if (suma < sumb) then begin
    writeln('B ',sumb);
  end;

  close(input);
  close(output);
end.