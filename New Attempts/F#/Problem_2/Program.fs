open System

[<EntryPoint>]
let main argv =
    let fib (a, b) = a + b

    let mutable (a, b, c) = (1, 1, 0)

    while c < 100 do
        c <- fib (a, b)
        a <- b
        b <- c
        printfn "%d" c
        
    0 // return an integer exit code