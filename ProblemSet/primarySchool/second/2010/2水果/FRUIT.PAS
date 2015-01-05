Program fruit;
Var
  x, y, z, ans: integer;
Begin
  assign(input, 'fruit.in');
  assign(output, 'fruit.out');
  reset(input);
  rewrite(output);

  readLn(x, y, z);

  ans := (x-1) + (y-1) + (z-1) + 1;

  writeLn(ans);

  close(input);
  close(output);
End.