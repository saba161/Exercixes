//https://codeforces.com/contest/469/problem/A

using System;
using System.Linq;

namespace codeforce
{
    class Program
    {
        static void Main(string[] args)
        {
            int sum = Convert.ToInt32(Console.ReadLine());

            var LittleX = Console.ReadLine().Split().Skip(1);
            var LittleY = Console.ReadLine().Split().Skip(1);

            var result = LittleX
                .Concat(LittleY)
                .Select(x => Int32.Parse(x))
                .ToArray()
                .Distinct();
                
            if(result.Count() == sum)
            {
                Console.WriteLine("I become the guy.");
            }
            else
            {
                Console.WriteLine("Oh, my keyboard!");
            }
        }
    }
}