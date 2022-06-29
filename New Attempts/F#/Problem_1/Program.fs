open System

[<EntryPoint>]
let main argv =
    let divisible i = i % 5 = 0 || i % 3 = 0

    let sum = [ 1 .. 999] |> Seq.filter(divisible) |> Seq.sum           

    printf "%d" sum
    0 // return an integer exit code