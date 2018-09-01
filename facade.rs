use std::{i8, i16, i32, i64, u8, u16, u32, u64, isize, usize, f32, f64};

use std::io::stdin;

fn main() { // Client
    let facade = PhoneFactoryFacade{};
    facade.develop_phones(10);
}


#[derive(Debug)]
struct PhoneFactoryFacade {}

impl PhoneFactoryFacade {
    fn develop_phones(&self, amount_of_phones: i64) {
        println!("===========================================================");
        MaterialFinder::find_metal(amount_of_phones);
        println!("-----------------------------------------------------------");
        MaterialFinder::find_other_materials(amount_of_phones);
        println!("===========================================================");
        Transport::transport_materials();
        println!("===========================================================");
        MaterialProcessor::process_metals();
        println!("-----------------------------------------------------------");
        MaterialProcessor::process_other_materials();
        println!("===========================================================");
        Factory::create_processor();
        println!("-----------------------------------------------------------");
        Factory::create_memory();
        println!("-----------------------------------------------------------");
        Factory::create_remaining();
        println!("===========================================================");
        Assembler::join_components();
        println!("-----------------------------------------------------------");
        Assembler::assemble_materials();
        println!("===========================================================");
        Tester::test_phones(amount_of_phones);
        println!("===========================================================");
        Transport::transport_product();
        println!("===========================================================");

    }
}

struct MaterialFinder {}

impl MaterialFinder {
    fn find_metal(amount: i64) {
        println!("Searching for {} aluminium grams...", 500 * amount);
        println!("Searching for {} sillicon grams...", 10 * amount);
        println!("Searching for {} gold grams...", 1 * amount);
    }

    fn find_other_materials(amount: i64) {
        println!("Searching for {} plastic grams...", 200 * amount);
        println!("Searching for {} glass grams...", 300 * amount);
    }
}

struct Transport {}

impl Transport {
    fn transport_materials() {
        println!("Transporting products to the factory...");
    }

    fn transport_product() {
        println!("Tansporting the phones to the stores...");
    }
}

struct MaterialProcessor {}

impl MaterialProcessor {
    fn process_metals() {
        println!("Processing aluminium for the phone structures...");
        println!("Processing sillicon for semiconductors...");
        println!("Processing gold for semiconductors...");
    }

    fn process_other_materials() {
        println!("Processing plastic for the phone cases, chargers and headphones...");
        println!("Processing glass for the screens...");
    }
}

struct Factory {}

impl Factory {
    fn create_processor() {
        println!("Requesting sillicon and gold...");
        println!("Creating the processors...");
        println!("Processors created.");
    }

    fn create_memory() {
        println!("Requesting sillicon and gold...");
        println!("Creating the memories...");
        println!("Memories created.");
    }

    fn create_remaining() {
        println!("Requesting plastic, glass and other materials...");
        println!("Creating the screens...");
        println!("Creating the cases...");
        println!("Creating the motherboards...");
        println!("Creating the cameras...");
        println!("Creating the buttons...");
        println!("Creating the chargers...");
        println!("Creating the headphones...");
        println!("All components created.");
    }
}

struct Assembler {}

impl Assembler {
    fn join_components() {
        println!("Preparing components...");
        println!("Requesting needed materials...");
        println!("All the components are ready to assemble.");
    }

    fn assemble_materials() {
        println!("Turning on assembling machines...");
        println!("Requesting screws...");
        println!("Assembling...");
        println!("Assembling finished successfully.");
    }
}

struct Tester {}

impl Tester {
    fn test_phones(amount: i64) {
        let mut counter = 1;
        while (counter <= amount) {
            println!("Testing phone {} of {}.", counter, amount);
            counter += 1;
        }
        println!("All phones tested successfully.");
        println!("All phones are ready for distribution.");
    }
}