#![allow(non_snake_case)]

fn main() {
    let mut sum = 0;

    for i in 1..9999999 {
        if i == sum_digits(i, 5) && i > 1{
            sum += i;
        }
    }

    println!("{}", sum);
}

fn sum_digits (mut n: i32, p: u32) -> i32 {
    let mut sum = 0;

    while n > 0 {
        sum += (n % 10).pow(p);
        n /= 10;
    }

    return sum
}