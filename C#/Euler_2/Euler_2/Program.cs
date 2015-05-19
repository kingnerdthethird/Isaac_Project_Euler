using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Euler_2
{
    class Program
    {
        static void Main(string[] args)
        {
            var fib = 0;
            var fib_1 = 1;
            var fib_2 = 0;
            var c = 0;
            var total = 0;

            for (c = 0; c < 35; c++)
            {
                if (c <= 1)
                {
                    fib = c;
                }

                else
                {
                    fib = fib_1 + fib_2;
                    fib_1 = fib_2;
                    fib_2 = fib;
                }
                if (fib % 2 == 0)
                {
                    total += fib;
                }
            }
            System.Console.WriteLine(total);
        }
    }
}
