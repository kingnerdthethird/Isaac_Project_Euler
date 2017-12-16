using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Euler_4
{
    class Program
    {
        static void Main(string[] args)
        {
            int num = 0;
            int sum = 0;

            for (int i = 100; i < 1000; i++)
            {
                for (int j = 100; j < 1000; j++)
                {
                    sum = i * j;
                    if (Check(sum))
                    {
                        if ((i * j) > num)
                        {
                            num = i * j;
                        }
                    }
                }
            }

            System.Console.WriteLine(num);
        }

        public static bool Check(int num)
        {
            string number = num.ToString();
            string revNumber = Reverse(number);
            if (number.Equals(revNumber))
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        public static string Reverse(string s)
        {
            char[] reverse_string = s.ToCharArray();
            Array.Reverse(reverse_string);
            return new string(reverse_string);
        }
    }
}
