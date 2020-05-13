#include <iostream>
#include <string>
using namespace std;


class CDevice {
protected:
    string name;
    bool power;
    int* cost = new int;

public:
    CDevice() {
        this->name = "Unknown";
        this->power = true;
        *cost = 0;
    }

    CDevice(string name, bool power, int Cost) {
        this->name = name;
        this->power = power;
        *cost = Cost;
    }

    void setAll(string name, bool power, int Cost) {
        this->name = name;
        this->power = power;
        *cost = Cost;
    }

    void setPower(bool power) {
        this->power = power;
    }

    void setName(string name) {
        this->name = name;
    }

    void getAll() {
        cout << "Device model: " << name << endl <<
            "Device is ";
        if (power == true)
            cout << "on." << endl;
        else
            cout << "off" << endl;
        cout << "Device cost: " << *cost << endl;
    }

    virtual void print() {};
    virtual void copy() {};

    ~CDevice() {
        delete cost;
        cout << "Object destoyed" << endl;
    }
};

class CCopyDevice : public CDevice {
private:
    int* paperLeft = new int,
        copySpeed,
        printSpeed;
public:
    CCopyDevice() {
        this->name = "Unknown";
        this->power = true;
        *cost = 0;
        *paperLeft = 0;
        this->copySpeed = 0;
        this->printSpeed = 0;
    }

    CCopyDevice(string name, bool power, int Cost, int PaperLeft, int copySpeed, int printSpeed) {
        this->name = name;
        this->power = power;
        *cost = Cost;
        *paperLeft = PaperLeft;
        this->copySpeed = copySpeed;
        this->printSpeed = printSpeed;
    }

    void setAll(string name, bool power, int Cost, int PaperLeft, int copySpeed, int printSpeed) {
        this->name = name;
        this->power = power;
        *cost = Cost;
        *paperLeft = PaperLeft;
        this->copySpeed = copySpeed;
        this->printSpeed = printSpeed;
    }

    void getAll() {
        cout << "Device model: " << name << endl <<
            "Device is ";
        if (power == true)
            cout << "on." << endl;
        else
            cout << "off" << endl;
        cout << "Device cost: " << *cost << endl <<
            "Paper left: " << *paperLeft << endl <<
            "Copy speed: " << copySpeed << endl <<
            "Print speed: " << printSpeed << endl;
    }

    void setCopySpeed(int copySpeed) {
        this->copySpeed = copySpeed;
    }

    void setPrintSpeed(int printSpeed) {
        this->printSpeed = printSpeed;
    }

    void print() override {
        if (*paperLeft != 0) {
            *paperLeft -= 1;
            cout << "Printing picture..." << endl <<
                "Paper Left: " << *paperLeft << endl;
        }
        else
            cout << "Not enough paper left." << endl;
    }

    void copy() override {
        if (*paperLeft != 0) {
            *paperLeft -= 1;
            cout << "Copying picture..." << endl <<
                "Paper Left: " << *paperLeft << endl;
        }
        else
            cout << "Not enough paper left." << endl;
    }

    CCopyDevice(const CCopyDevice& other) {
        this->paperLeft = other.paperLeft;
        this->copySpeed = other.copySpeed;
        this->printSpeed = other.printSpeed;
    }

    void operator = (const CCopyDevice& other) {
        if (paperLeft != 0) {
            delete paperLeft;
        }
        this->paperLeft = other.paperLeft;
        this->copySpeed = other.copySpeed;
        this->printSpeed = other.printSpeed;
    }

    ~CCopyDevice() {
        delete paperLeft;
        cout << "Object destroyed" << endl;
    }
};

int main() {
    CCopyDevice obj("Sony 2000", true, 1850, 50, 38, 30);
    obj.getAll();
    obj.copy();
    obj.print();
    return 0;
}