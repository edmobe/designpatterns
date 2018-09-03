use std::{i8, i16, i32, i64, u8, u16, u32, u64, isize, usize, f32, f64};
use std::io::stdin;

trait SpeedMeter {
    fn calculateSpeed(&self);
}

struct EnglishSpeedMeter {
    miles_: f64,
    hours_: f64,
}

impl EnglishSpeedMeter {
    fn calculateMphSpeed(&self) {
       println!("The speed is {} miles per hour.", self.miles_/self.hours_);
    }
}

struct SISpeedMeterAdapter {
    meters_: f64,
    seconds_: f64,
}

impl SpeedMeter for SISpeedMeterAdapter {
    fn calculateSpeed(&self) {
        let esm = EnglishSpeedMeter {
            miles_: self.meters_ / 1609.344,
            hours_: self.seconds_ / 3600.0
        };
        esm.calculateMphSpeed();
    }   
}

fn main() {
    let adapter = SISpeedMeterAdapter {
        meters_: 1000.0,
        seconds_: 5.0,
    };
    adapter.calculateSpeed();
}