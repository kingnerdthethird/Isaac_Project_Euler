#![allow(non_snake_case)]

fn main() {
    let mut i = 1;
    let mut sum = 0; 

    loop {
        sum += i;
        if num_divisors(prime_factors(sum)) >= 500 {
            println!("{}", sum);
            break;
        }
        i += 1;
    }
}

fn num_divisors(factors: Vec<u64>) -> i32 {
    let mut prod = 1;
    let mut powers: Vec<i16> = [].to_vec();
    let mut power = 1;

    for i in 0..factors.len() - 1 {
        if factors[i] == factors[i + 1] {
            power += 1;
        } else {
            powers.push(power as i16);
            power = 1;
        }
    }
    powers.push(power);

    for p in powers {
        prod *= p + 1;
    }
    
    return prod as i32;
}

fn prime_factors(mut n: u64) -> Vec<u64> { 
    let mut factors: Vec<u64> = [].to_vec();

    let mut z = 2;

    while z * z <= n {
        if n % z == 0{
            n /= z as u64;
            factors.insert(0, z);
        } else {
            z += 1;
        }
    }
    factors.insert(0, n);

    return factors;
}