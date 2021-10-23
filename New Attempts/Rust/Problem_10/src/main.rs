#![allow(non_snake_case)]

fn main() {
    let mut sum: u64 = 0;

    for p in 2..2000000 {
        if is_prime(p) {
            sum += p as u64;
        }
    }

    println!("{}", sum);
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