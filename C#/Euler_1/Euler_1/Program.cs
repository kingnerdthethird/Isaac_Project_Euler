using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Euler_1{

    class Program{
        
        static void Main(string[] args){
            var total = 0;
            for (int i = 0; i < 1000; i++){
                if (i % 3 == 0 || i % 5 == 0){
                    total += i;
                }
            }
            System.Console.WriteLine(total);
        }
    }
}
