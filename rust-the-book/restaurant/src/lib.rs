mod front_of_house;
pub use crate::front_of_house::hosting;
pub use crate::front_of_house::serving;

fn deliver_order() {}

mod back_of_house {
    fn cook_order() {}

    fn fix_incorrect_order() {
        cook_order();
        super::deliver_order();
    }

    pub struct Breakfast {
        pub toast: String,
        seasonal_fruit: String,
    }

    impl Breakfast {
        pub fn summer(toast: &str) -> Breakfast {
            Breakfast {
                toast: String::from(toast),
                seasonal_fruit: String::from("peaches"),
            }
        }
    }

    pub enum Appetizer {
        Soup,
        Salad,
    }
}

pub fn eat_at_restaraunt() {
//    // Absolute path (prefered)
//    crate::front_of_house::hosting::add_to_waitlist();
//
//    // Relative path
//    front_of_house::hosting::add_to_waitlist();

    hosting::add_to_waitlist();
    serving::take_payment();
    serving::take_order();

    // Order a breakfast in the summer with Rye toast
    let mut meal = back_of_house::Breakfast::summer("Rye");
    // Change our mind about what break we'd like
    meal.toast = String::from("Wheat");
    println!("I'd like {} toast please", meal.toast);

    // The next line won't compile if we uncomment it; we're not allowed
    // to see or modify the seasonal fruit that somes with the meal
    // meal.seasonal_fruit = String::from("blueberries")

    let order1 = back_of_house::Appetizer::Soup;
    let order2 = back_of_house::Appetizer::Salad;
}
