#![allow(non_snake_case)]
fn main() {
    let mut count = 0;
    let mut num = 1;

    while count < 10_001 {
        num += 1;
        if is_prime(num){
            count += 1;
        }
    }

    println!("{}", num)
}

fn is_prime (n: i32) -> bool {
    let mut d = 2;

    while d * d <= n {
        if n % d == 0 {
            return false;
        }

        d += 1;
    }

    return true;
}