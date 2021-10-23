#![allow(non_snake_case)]
fn main() {
    let mut num = 0;

    for i in (100..1000).rev() {
        for j in (100..1000).rev() {
            if is_palindrome(i * j) && i * j > num{
                num = i * j;
            }
        }
    }

    println!("{}", num);
}

fn is_palindrome(n: i32) -> bool {
    let mut temp = n;
    let mut n_rev = 0;
    
    while temp > 0 {
        n_rev *= 10;
        n_rev += temp % 10;
        temp /= 10;
    }

    if n_rev == n {
        return true;
    } else {
        return false;
    }
}