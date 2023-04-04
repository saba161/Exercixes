//https://codeforces.com/problemset/problem/236/A

using System;
 
class HelloWorld 
{
  static void Main() 
  {
        string text = Console.ReadLine();
        string uniqueText = "";
        for (int i = 0; i < text.Length; i++)
        {
            int count = 0;
            if (uniqueText.Length == 0)
            {
                uniqueText += text[i];
            }
 
            for (int j = 0; j < uniqueText.Length; j++)
            {
                if (text[i] == uniqueText[j])
                {
                    count++;
                }
            }
 
            if (count == 0)
            {
                uniqueText += text[i];
                count = 0;
            }
        }
  
 
        if (uniqueText.Length % 2 == 0)
        {
            Console.WriteLine("CHAT WITH HER!");
        }
        else
        {
            Console.WriteLine("IGNORE HIM!");
        }
  }
}