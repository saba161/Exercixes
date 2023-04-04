//https://codeforces.com/contest/791/problem/A

using System;

class HelloWorld 
{
  static void Main() 
  {
    
        string[] vals = Console.ReadLine().Split(' ');
        int lee = Convert.ToInt32(vals[0]);
        int bob = Convert.ToInt32(vals[1]);
        int count = 0;
        
        while (lee <= bob)
        {
            bob = bob * 2;
            lee = lee * 3;

            count++;
        }

        Console.WriteLine(count);
  }
}