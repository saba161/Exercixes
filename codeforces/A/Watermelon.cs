//https://codeforces.com/problemset/problem/4/A

using System;

namespace HelloWorld
{
    class Program
    {
        static void Main(string[] args)
        {
            int w = int.Parse(Console.ReadLine());
            if (w%2==0 && w!=2)
            {
                Console.WriteLine("YES");
            }
            else
            {
                Console.WriteLine("NO");
            }
        }
    }
}