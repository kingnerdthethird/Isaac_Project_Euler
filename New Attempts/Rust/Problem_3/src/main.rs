#![allow(non_snake_case)]
fn main() {
    let mut num: i64 = 600_851_475_143;
    let mut z = 2;

    while z * z < num {
        if num % z == 0{
            num /= z;
        } else {
            z += 1;
        }
    }

    println!("{}", num)
}
