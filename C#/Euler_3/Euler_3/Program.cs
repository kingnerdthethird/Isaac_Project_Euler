using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Euler_3
{
    class Program
    {
        static void Main(string[] args)
        {
            ulong z = 2;
            ulong num = 600851475143;
            while (z * z <= num)
            {
                if (num % z == 0)
                {
                    System.Console.WriteLine(z);
                    num /= z;
                }
                else
                {
                    z++;
                }
            }

            if (num > 1)
            {
                System.Console.WriteLine(num);
            }
        }
    }
}
