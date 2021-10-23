#![allow(non_snake_case)]
fn main () {
    let mut num = 20;

    loop {
        if num % 20 == 0 && 
           num % 19 == 0 && 
           num % 18 == 0 && 
           num % 17 == 0 && 
           num % 16 == 0 && 
           num % 15 == 0 && 
           num % 14 == 0 && 
           num % 13 == 0 && 
           num % 12 == 0 && 
           num % 11 == 0 {
               break
           }

           num += 20;
    }

    println!("{}", num);
}