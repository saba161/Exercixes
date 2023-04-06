//https://codeforces.com/problemset/problem/59/A

string word = Console.ReadLine();

string result = String.Empty;

var loverCase = word
    .Where(x => Char.IsLower(x));

var upperCase = word
    .Where(x => Char.IsUpper(x));

result = upperCase.Count() > loverCase.Count() ? word.ToUpper() : word.ToLower();

Console.Write(result);