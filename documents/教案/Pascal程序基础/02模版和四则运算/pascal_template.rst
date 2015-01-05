Pascal程序模版
===============================================================================

.. code:: pascal

    program program_name; {程序名称}
    begin
      assign(input, 'program_name.in');    {打开输入文件program_name.in}
      assign(output, 'program_name.out');  {打开输出文件program_name.out}
      reset(input);
      rewrite(output);

      {解题代码写在这里}

      close(input);     {关闭输入文件}
      close(output);    {关闭输出文件}
    end.

Hello, World!
===============================================================================

.. code:: pascal

    program helloworld;
    begin
      assign(input, 'helloworld.in');
      assign(output, 'helloworld.out');
      reset(input);
      rewrite(output);

      writeln('Hello, World!'); {输出Hello, World!并换行}

      close(input);
      close(output);
    end.

