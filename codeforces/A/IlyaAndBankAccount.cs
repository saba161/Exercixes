var n = Convert.ToInt32(Console.ReadLine());
int result = n;

if (n < 0)
{
    var lg = n.ToString().Length;

    var res = Convert.ToInt32(n.ToString()
        .Remove(lg - 1, 1));

    var res2 = Convert.ToInt32(n
        .ToString()
        .Remove(lg - 2, 1));

    if (res > res2)
        result = res;
    else
        result = res2;
}

Console.WriteLine(result);