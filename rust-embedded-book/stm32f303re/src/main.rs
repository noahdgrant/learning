#![no_std]
#![no_main]

// Dev profile: easer to debug panics; can put a breakpoint on 'rust_begin_unwind'
#[cfg(debug_assertions)]
use panic_halt as _; // Panic handler

// Release profile: minimize the binary size of the application
#[cfg(not(debug_assertions))]
use panic_abort as _;

use cortex_m::peripheral::{syst, Peripherals};
use cortex_m_rt::entry;

#[entry]
fn main() -> ! {
    let peripherals = Peripherals::take().unwrap();
    let mut systick = peripherals.SYST;
    systick.set_clock_source(syst::SystClkSource::Core);
    systick.set_reload(1_000);
    systick.clear_current();
    systick.enable_counter();

    while !systick.has_wrapped() {
        // Loop
    }

    loop {}
}
