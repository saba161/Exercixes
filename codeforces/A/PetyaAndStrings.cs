//https://codeforces.com/contest/112/problem/A

using System;

class HelloWorld 
{
  static void Main() 
  {
    string x = String.Empty;
    string y = String.Empty;
  
    x = Console.ReadLine();
    y = Console.ReadLine();
    
    int result = string.Compare(x.ToLower(), y.ToLower());
    Console.WriteLine(result);
  }
}