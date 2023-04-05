//https://codeforces.com/contest/467/problem/A

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;

namespace codeforce
{
    class Program
    {
        static void Main(string[] args)
        {
            var n = Int32.Parse(Console.ReadLine());
            var result = 0;
            for(int i = 0; i < n; i++)
            {
                var nums = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                result += nums[1] - nums[0] >= 2 ? 1 : 0;
            }

            Console.WriteLine(result);
        }
    }
}