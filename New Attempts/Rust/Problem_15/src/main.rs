#![allow(non_snake_case)]

fn main() {
    let mut grid: [[u64; 21]; 21] = [[1; 21]; 21];

    for i in 1..grid.len() {
        for j in 1..grid[i].len() {
            grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
        }
    }

    println!("{}", grid[20][20]);
}
