//https://codeforces.com/contest/977/problem/A

using System;

public class HelloWorld
{
    public static void Main(string[] args)
    {
        string[] input = Console.ReadLine().Split();
         
        int n = int.Parse(input[0]);
        int k = int.Parse(input[1]);
        
        for (int i = 0; i < k; i++) {
            if (n % 10 == 0) {
                n = n / 10;
            }
            else {
                n = n - 1;
            }
        }
        
        Console.WriteLine (n);
    }
}