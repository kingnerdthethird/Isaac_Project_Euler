#![allow(non_snake_case)]

fn main() {
    let mut months = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
    let mut week_day = 1;
    let mut count = 0;

    for year in 1900..=2000 {
        if year % 4 == 0 && (year % 100 != 0  || year % 400 == 0){
            months[1] = 29;
        } else {
            months[1] = 28;
        }
        for month in months {
            for day in 0..month {
                if day == 0 && week_day == 0 && year > 1900{
                    count += 1;
                }
                week_day += 1;
                week_day %= 7;
            }
        }
    }

    println!("{}", count);
}
