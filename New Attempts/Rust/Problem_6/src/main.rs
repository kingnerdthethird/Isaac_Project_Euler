#![allow(non_snake_case)]
fn main() {
    let mut sum = 0;
    let mut prod = 0;

    for i in 1..101 {
        sum += i * i;
        prod += i;
    }

    println!("{}", prod * prod - sum);
}
