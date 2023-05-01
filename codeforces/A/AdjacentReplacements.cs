var n = Convert.ToInt32(Console.ReadLine());
Int64[] ar = new Int64[n];
var s = Console.ReadLine();
for(var i = 0; i<n; i++)
{
    ar[i] = Convert.ToInt64(s.Split(' ')[i]);
    if(ar[i] % 2 == 0)
    {
        ar[i]--;
    }
    Console.Write(ar[i] + " ");
}
