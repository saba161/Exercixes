//https://codeforces.com/contest/432/problem/A

using System;
using System.Collections.Generic;
using System.Linq;

namespace codeforce
{
    class Program
    {
        static void Main(string[] args)
        {
            var nxk = Array.ConvertAll(Console.ReadLine().Split(' '), Convert.ToInt32);
            var numbers = Console.ReadLine().Split(' ');
            int n = nxk[0];
            int k = nxk[1];

            int maxScore = 5 - k;

            var filterList = numbers
                .Select(x => Int32.Parse(x))
                .Where(x => x <= maxScore)
                .Count() / 3;

            Console.WriteLine(filterList);
        }
    }
}