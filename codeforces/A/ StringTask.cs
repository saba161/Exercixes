//https://codeforces.com/contest/118/problem/A

string word = Console.ReadLine();

var vowels = new char[] { 'a', 'o', 'y', 'e', 'u', 'i' };

var removeChar = new String(word.ToLower()
    .Where(x => !vowels.Contains(x))
    .ToArray());

string result = String.Empty;

foreach (var ch in removeChar)
{
    result += '.'.ToString() + ch;
}

Console.Write(result);