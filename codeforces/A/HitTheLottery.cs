//https://codeforces.com/contest/996/problem/A

using System;
using System.Linq;

namespace codeforce
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = Convert.ToInt32(Console.ReadLine());
            var count = 0;
            var ans = 0;

            count = n / 100;
            ans = n % 100;

            count += ans / 20;
            ans %= 20;

            count += ans / 10;
            ans %= 10;

            count += ans / 5;
            ans %= 5;

            count += ans / 1;
            ans %= 1;

            Console.WriteLine(count);
        }
    }
}