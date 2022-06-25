#![allow(non_snake_case)]

fn main() {
    for a in -999..=999 {
        for b in -1000..=1000 {
            let mut n = 0;

            while is_prime(formula(n, a, b)) {
                n += 1;
            }
        }
    }
}

fn is_prime(n: i32) -> bool {
    let mut d = 2;

    while d * d <= n {
        if n % d == 0 {
            return false;
        }

        d += 1;
    }

    return true;
}

fn formula (n: i32, a:i32, b:i32) -> i32 {
    return n*n + a*n + b;
}