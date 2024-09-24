// VERSION 1
// fn main() {
//     let width1 = 30;
//     let height1 = 50;
//
//     println!("The aread of the rectangle is {} square pixels.",
//              area(width1, height1)
//              );
// }
//
// fn area(width: u32, height: u32) -> u32 {
//     width * height
// }

// VERSION 2
// fn main() {
//     let rect1 = (30, 50);
//
//     println!("The area of the rectangle is {} square pixels.",
//              area(rect1)
//              );
// }
//
// fn area(dimentions: (u32, u32)) -> u32 {
//     dimentions.0 * dimentions.1
// }

// VERSION 3
//#[derive(Debug)]
//struct Rectangle {
//    width: u32,
//    height: u32,
//}
//
//fn main() {
//    let rect1 = Rectangle {width: 30, height: 50};
//
//    // use :? to print struct in debug mode
//    println!("rect1 is {:?}", rect1);
//
//    // use :#? for pretty debug print
//    println!("rect is {:#?}", rect1);
//
//    println!(
//        "The area of the rectangle is {} square pixels.",
//        area(&rect1)
//    );
//
//    let scale = 2;
//    let rect2 = Rectangle {
//        width: dbg!(30 * scale),
//        height: 50,
//    };
//
//    dbg!(&rect2);
//}
//
//fn area(rectangle: &Rectangle) -> u32 {
//    rectangle.width * rectangle.height
//}

// VERSION 4
#[derive(Debug)]
struct Rectangle {
    width: u32,
    height: u32,
}

impl Rectangle {
    // Methods
    fn area(&self) -> u32 {
        self.width * self.height
    }

    fn width(&self) -> bool {
        self.width > 0 // Return TRUE if width > 0
    }

    fn can_hold(&self, other: &Rectangle) -> bool {
        self.width > other.width && self.height > other.height
    }

    fn set_width(&mut self, width: u32) {
        self.width = width;
    }

    // Associated functions
    fn square(size: u32) -> Self {
        Self {
            width: size,
            height: size,
        }
    }
}

fn main() {
    let rect1 = Rectangle {
        width: 30,
        height: 50,
    };

    let rect2 = Rectangle {
        width: 10,
        height: 40,
    };

    let rect3 = Rectangle {
        width: 60,
        height: 45,
    };

    let mut rect4 = Rectangle {
        width: 1,
        height: 2,
    };

    let square1 = Rectangle::square(3);

    println!(
        "The area of the rectangle is {} square pixels.",
        rect1.area()
    );

    if rect1.width() {
        println!("The rectangle has a nonzero width; it is {}", rect1.width);
    }

    println!("Can rect1 hold rect2? {}", rect1.can_hold(&rect2));
    println!("Can rect1 hold rect3? {}", rect1.can_hold(&rect3));

    println!("The sqaure area is: {}", square1.area());

    let area1 = rect4.area();
    let area2 = Rectangle::area(&rect4);
    assert_eq!(area1, area2);
    
    // These two are equivalent
    rect4.set_width(20);
    Rectangle::set_width(&mut rect4, 20);
}
