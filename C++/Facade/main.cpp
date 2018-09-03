#include <iostream>

using namespace std;
#define println(x) cout << x << endl;

struct MaterialFinder {
    static void find_metal(int amount) {
        println("Searching for " + to_string(500 * amount) + " aluminium grams...");
        println("Searching for " + to_string(10 * amount) + " sillicon grams...");
        println("Searching for " + to_string(1 * amount) + " gold grams...");
    }

    static void find_other_materials(int amount) {
        println("Searching for " + to_string(200 * amount) + " plastic grams...");
        println("Searching for " + to_string(300 * amount) + " glass grams...");
    }
};

struct Transport {
    static void transport_materials() {
        println("Transporting products to the factory...");
    }

    static void transport_product() {
        println("Tansporting the phones to the stores...");
    }
};

struct MaterialProcessor {
    static void process_metals() {
        println("Processing aluminium for the phone structures...");
        println("Processing sillicon for semiconductors...");
        println("Processing gold for semiconductors...");
    }

    static void process_other_materials() {
        println("Processing plastic for the phone cases, chargers and headphones...");
        println("Processing glass for the screens...");
    }
};

struct Factory {
    static void create_processor() {
        println("Requesting sillicon and gold...");
        println("Creating the processors...");
        println("Processors created.");
    }

    static void create_memory() {
        println("Requesting sillicon and gold...");
        println("Creating the memories...");
        println("Memories created.");
    }

    static void create_remaining() {
        println("Requesting plastic, glass and other materials...");
        println("Creating the screens...");
        println("Creating the cases...");
        println("Creating the motherboards...");
        println("Creating the cameras...");
        println("Creating the buttons...");
        println("Creating the chargers...");
        println("Creating the headphones...");
        println("All components created.");
    }
};

struct Assembler {
    static void join_components() {
        println("Preparing components...");
        println("Requesting needed materials...");
        println("All the components are ready to assemble.");
    }

    static void assemble_materials() {
        println("Turning on assembling machines...");
        println("Requesting screws...");
        println("Assembling...");
        println("Assembling finished successfully.");
    }
};

struct Tester {
    static void test_phones(int amount) {
        int counter = 1;
        while (counter <= amount) {
            println("Testing phone " + to_string(counter) + " of " + to_string(amount) + ".");
            counter += 1;
        }
        println("All phones tested successfully.");
        println("All phones are ready for distribution.");
    }
};

struct Packager {
    static void request_boxes(int amount) {
        println("Requesting " + to_string(amount) + " boxes to manufacturer...");
        println("Boxes ready.");
    }

    static void package_phones(int amount) {
        int counter = 1;
        while (counter <= amount) {
            println("Packing phone " + to_string(counter) + " of " + to_string(amount) + ".");
            counter += 1;
        }
        println("All phones packaged successfully.");
        println("All phones are ready for distribution.");
    }
};

struct PhoneFactoryFacade {
    void develop_phones(int amount_of_phones) {
        println("=======================================================");
        MaterialFinder::find_metal(amount_of_phones);
        println("-------------------------------------------------------");
        MaterialFinder::find_other_materials(amount_of_phones);
        println("=======================================================");
        Transport::transport_materials();
        println("=======================================================");
        MaterialProcessor::process_metals();
        println("-------------------------------------------------------");
        MaterialProcessor::process_other_materials();
        println("=======================================================");
        Factory::create_processor();
        println("-------------------------------------------------------");
        Factory::create_memory();
        println("-------------------------------------------------------");
        Factory::create_remaining();
        println("=======================================================");
        Assembler::join_components();
        println("-------------------------------------------------------");
        Assembler::assemble_materials();
        println("=======================================================");
        Tester::test_phones(amount_of_phones);
        println("=======================================================");
        Packager::request_boxes(amount_of_phones);
        println("-------------------------------------------------------");
        Packager::package_phones(amount_of_phones);
        println("=======================================================");
        Transport::transport_product();
        println("=======================================================");
    }
};

int main() {
    PhoneFactoryFacade facade;
    facade.develop_phones(10);
    return 0;
}