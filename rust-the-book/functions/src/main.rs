fn main() {
    another_function(5);

    print_labeled_measurement(5, 'h');


    // Statements and expressions
    let y = {
        let x = 3;
        x + 1 // No ; at the end means it returns a value
    };
    println!("The value of y is: {y}");


    // Return values
    let x = five();
    println!("The value of x is: {x}");

    let z = plus_one(5);
    println!("The value of z is: {z}");
}

fn another_function(x: i32) {
    println!("The value of x is: {x}");
}

fn print_labeled_measurement(value: i32, unit_label: char) {
    println!("The measurement is: {value}{unit_label}");
}

fn five() -> i32 {
    5 // Implicitly returns the last expression in the function
}

fn plus_one(x: i32,) -> i32 {
    x + 1 // Works
    // x + 1; // Doesn't work
}
