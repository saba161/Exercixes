//https://codeforces.com/contest/58/problem/A

using System;

namespace codeforce
{
    class Program
    {
        static void Main(string[] args)
        {
            string n = Console.ReadLine();
            string hello = "hello";
            int count = 0;

            for(int i = 0; i < n.Length; i++)
            {
                if(hello[count] == n[i])
                {
                    count++;

                    if(count == 5)
                    {
                        break;
                    }
                }
            }

            if(count == 5)
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