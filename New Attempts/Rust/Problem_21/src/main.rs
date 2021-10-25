#![allow(non_snake_case)]

fn main() {
    let mut sum = 0;

    for i in 1..10000 {
        let d = sum_divisors(i);

        if i == sum_divisors(d) && d == sum_divisors(i) && i != d {
            sum += i;
            sum += d;
        }
    }

    println!("{}", sum / 2); 
}

fn sum_divisors(n: i32) -> i32{
    let mut z = 2;
    let mut sum = 1;

    while z * z < n {
        if n % z == 0 {
            sum += z;
            sum += n / z;
        }

        z += 1;
    }

    return sum;
}