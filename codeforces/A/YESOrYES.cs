//https://codeforces.com/problemset/problem/1703/A

var n = Convert.ToInt32(Console.ReadLine());
var words = new List<string?>();

for (int i = 0; i < n; i++)
{
    words.Add(Console.ReadLine());
}

var result = words
    .Select(x =>
    {
        if (x.ToUpper() != "YES")
        {
            x = "NO";
        }

        return x.ToUpper();
    });

foreach (var item in result)
{
    Console.WriteLine(item);
}