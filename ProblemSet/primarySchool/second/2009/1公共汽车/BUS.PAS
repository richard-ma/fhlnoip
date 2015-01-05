Program bus;
Var
  arr: array[1..100]of integer;
  i, n, a, b, sum, ans: integer;
Begin
  assign(input, 'bus.in');
  assign(output, 'bus.out');
  reset(input);
  rewrite(output);

  readLn(n);
  For i:=1 To n Do Begin
    readLn(arr[i]);
  End;
  readLn(a, b);

  sum := 0;
  For i:=1 To n Do sum := sum + arr[i];

  ans := a + sum - b;

  writeLn(ans);

  close(input);
  close(output);
End.