#![allow(non_snake_case)]
fn main() {
    let mut fs = (0, 0, 1);
    let mut sum = 0;

    while fs.2 + fs.1 < 4_000_000 {
        fs.0 = fs.1;
        fs.1 = fs.2;
        fs.2 = fs.0 + fs.1;

        if fs.2 % 2 == 0 {
            sum += fs.2;
        }
    }

    println!("{}", sum)
}