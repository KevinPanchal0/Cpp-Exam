#include <iostream>
using namespace std;

class Device {
protected:
    string brand;
    double price;

public:
    Device(string deviceBrand, double devicePrice) : brand(deviceBrand), price(devicePrice) {}

    virtual double calculateDiscount() const {
        return 0.0;
    }

    void displayDetails() const {
        cout << "Brand: " << brand << "\tPrice: $" << price << endl;
    }
};

class Laptop : public Device {
public:
    Laptop(string deviceBrand, double devicePrice) : Device(deviceBrand, devicePrice) {}

    double calculateDiscount() const override {
        return 0.1 * price;
    }
};

class Smartphone : public Device {
public:
    Smartphone(string deviceBrand, double devicePrice) : Device(deviceBrand, devicePrice) {}

    double calculateDiscount() const override {
        return 0.05 * price;
    }
};

int main() {
    const int numDevices = 3;
    Device* devices[numDevices];

    devices[0] = new Laptop("Dell", 1200.0);
    devices[1] = new Smartphone("Samsung", 800.0);
    devices[2] = new Device("Generic", 500.0);

    cout << "Discounts:" << endl;
    for (int i = 0; i < numDevices; ++i) {
        devices[i]->displayDetails();
        double discount = devices[i]->calculateDiscount();
        cout << "Discount: $" << discount << endl;
        cout << "------------------" << endl;
    }

    for (int i = 0; i < numDevices; ++i) {
        delete devices[i];
    }

    return 0;
}

