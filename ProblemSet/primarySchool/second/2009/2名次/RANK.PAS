Program rank;
Var
  n, base, i, t, ans: integer;
Begin
  assign(input, 'rank.in');
  assign(output, 'rank.out');
  reset(input);
  rewrite(output);

  readLn(n);
  read(base);
  ans := 1;
  For i:=2 To n Do Begin
    read(t);
    If t > base Then inc(ans);
  End;

  writeLn(ans);

  close(input);
  close(output);
End.