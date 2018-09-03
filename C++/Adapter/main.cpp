#include <iostream>
using namespace std;

#define println(x) cout << x << endl;

class SpeedMeter {
public:
    virtual void calculateSpeed() = 0;
};

class EnglishSpeedMeter {
private:
    float miles_;
    float hours_;
public:
    EnglishSpeedMeter(float miles, float hours) {
        miles_ = miles;
        hours_ = hours;
    }

    void calculateMphSpeed() {
       println("The speed is " + to_string(miles_/hours_) + " miles per hour.");
    }
};

class SISpeedMeterAdapter: public SpeedMeter, private EnglishSpeedMeter{
public:
    SISpeedMeterAdapter(float meters_, float seconds_) : EnglishSpeedMeter (meters_ / 1609.344, seconds_ / 3600) {}
    virtual void calculateSpeed() {
        calculateMphSpeed();
    }
};

int main() {
    SpeedMeter* sm = new SISpeedMeterAdapter(1000, 5);
    sm->calculateSpeed();
    return 0;
}