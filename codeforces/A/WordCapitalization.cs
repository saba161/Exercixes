//https://codeforces.com/contest/281/problem/A

using System;
using System.Linq;
 
class HelloWorld 
{
  static void Main() 
  {
    string x = Console.ReadLine();
    
    Console.WriteLine(Char.ToUpper(x[0]) + x.Remove(0, 1));
  }
}