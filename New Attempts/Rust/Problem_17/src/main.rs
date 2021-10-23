#![allow(non_snake_case)]

fn main() {
    let mut sum = 0;
    
    for i in 1..=1000 {
        let length = to_english(i).len();
        sum += length;
    }

    println!("{}", sum);
}

fn to_english<'life>(num: usize) -> String{
    let mut number: String = "".to_string();
    let ones_words = ["", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"];
    let teens_words = ["ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"];
    let tens_words = ["", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"];
    let hundreds_words = ["", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"];
    let thousands_words = ["", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"];
    let hundred_word = "hundred";
    let thousand_word = "thousand";
    let and_word = "and";

    if num < 10 {
        number += ones_words[num];
    } else if num < 20 {
        number += teens_words[num - 10];
    } else if num < 100 {
        let ones = num % 10;
        let tens = num / 10;

        number += tens_words[tens];
        number += ones_words[ones];
    } else if num < 1000 {
        let tens = num % 100;
        let hundreds = num / 100;

        number += hundreds_words[hundreds];
        number += hundred_word;
        if tens != 0 {
            number += and_word;
        }
        number += to_english(tens).as_str();

    } else {
        let hundreds = num % 1000;
        let thousands = num / 1000;

        number += thousands_words[thousands];
        number += thousand_word;
        number += to_english(hundreds).as_str();
    }
    
    return number;
}