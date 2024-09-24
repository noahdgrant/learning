fn main() {
    // if / else
    let number = 3;

    if number < 5 {
        println!("condition was true");
    } else {
        println!("condition was false");
    }

    
    // else if
    let num = 6;

    if num % 4 == 0 {
        println!("number is divisible by 4");
    } else if num % 3 == 0 {
        println!("number is divisible by 3");
    } else if num % 2 == 0 {
        println!("number is divisible by 2");
    } else {
        println!("number is not divisible by 4, 3, or 2");
    }


    // if / let
    let condition = true;
    let n = if condition {5} else {5};
    println!("The value of number is: {n}");
    
    // Will compile
//    let cond = true;
//    let x;
//    if cond {
//        x = 1;
//    } else {
//        x = 2;
//    }

    // Won't compile
    //let x = 1;
    //let y = if x {0} else {1};
    //println!("{y}");
}
