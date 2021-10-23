#![allow(non_snake_case)]
fn main() {
    let c = 1000;
    let mut num = 0;

    for b in 1..c {
        for a in 1..c-b {
            let d = c - a - b;
            
            if is_triple(a, b, d) {
                num = a*b*d;
            }
        }
    }

    println!("{}", num);

}

fn is_triple(a: u64, b: u64, c: u64) -> bool {
    if a*a + b*b == c*c {
        return true;
    } else {
        return false;
    }
}