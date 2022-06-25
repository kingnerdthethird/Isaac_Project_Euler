#![allow(non_snake_case)]

fn main() {
    let mut sum: u64 = 0;

    for i in 1..28123 {
        let mut sum_abundant = false;
        for j in 1..i {
            if is_abundant(j) && is_abundant(i - j) {
                sum_abundant = true;
                break;
            }
        }

        if sum_abundant == false {
            sum += i as u64;
        }
    }

    println!("{}", sum);
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

fn is_abundant(n: i32) -> bool {
    return sum_divisors(n) > n && n != 0;
}