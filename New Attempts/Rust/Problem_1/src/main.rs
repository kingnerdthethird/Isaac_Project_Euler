#![allow(non_snake_case)]

fn main() {
    let mut sum = 0;

    for n in 1..1000 {
        if n % 15 == 0 {
            sum += n;
        } else if n % 5 == 0 {
            sum += n;
        } else if n % 3 == 0 {
            sum += n;
        }
    }

    println!("{}", sum);
}