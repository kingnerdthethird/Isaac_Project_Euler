#![allow(non_snake_case)]

fn main() {
    let mut num: Vec<u32> = [1].to_vec();

    for n in 1..100 {
        for i in 0..num.len() {
            num[i] *= n;
        }

        num = reduce(num);
    }

    let mut sum = 0;

    for digit in num {
        sum += digit;
    }

    println!("{}", sum);
}

fn reduce(mut digits: Vec<u32>) -> Vec<u32> {
    for i in (1..digits.len()).rev() {
        let tens = digits[i] / 10;

        digits[i] %= 10;
        digits[i - 1] += tens;
    }

    while digits[0] / 10 != 0 {
        let rem = digits[0] / 10;
        digits[0] %= 10;
        digits.insert(0, rem);
    }

    return digits;
}