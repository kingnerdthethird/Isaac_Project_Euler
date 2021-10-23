#![allow(non_snake_case)]

fn main() {
    let mut length = 0;
    let mut start = 0;

    for i in 1..1000000 {
        if sequence(i).len() > length {
            length = sequence(i).len();
            start = i;
        }
    }

    println!("{}", start);
}

fn collatz(n: u64) -> u64 {
    if n % 2 == 0 {
        return n/2;
    } else {
        return 3*n + 1;
    }
}

fn sequence(mut start: u64) -> Vec<u64> {
    let mut seq: Vec<u64> = [start].to_vec();

    while start > 1 {
        start = collatz(start);
        seq.push(start);
    }

    return seq;
}