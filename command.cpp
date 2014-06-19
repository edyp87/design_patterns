
#include <iostream>
#include <string>

using namespace std;

/////////////////////// Command Design Pattern //////////////////////////


// to jest receiver
class ElectronicDevice {
public:
    virtual void on()         = 0;
    virtual void off()        = 0;
    virtual void volumeUp()   = 0;
    virtual void volumeDown() = 0;
};

// konkretny receiver bedacy telewizorem
class Television : public ElectronicDevice {
public:
    Television() : volume(0) {}
    virtual void on() {
        cout << "TV is on" << endl;
    }

    virtual void off() {
        cout << "TV is off" << endl;
    }

    virtual void volumeUp() {
        volume++;
        cout << "TV volume is at " << volume << endl;
    }

    virtual void volumeDown() {
        volume--;
        cout << "TV volume is at " << volume << endl;
    }

private:
    int volume;
};


// interfejs dla polecenia
class Command {
public:
    virtual void execute() = 0;
};


// polecenie wlaczajace telewizor
class TurnTVOn : public Command {
public:
    TurnTVOn(ElectronicDevice & newDevice) : theDevice(newDevice) { }

    void execute() {
        theDevice.on();
    }

private:
    ElectronicDevice & theDevice;
};

class TurnTVOff : public Command {
public:
    TurnTVOff(ElectronicDevice & newDevice) : theDevice(newDevice) { }

    void execute() {
        theDevice.off();
    }

private:
    ElectronicDevice & theDevice;
};

class TurnTVUp : public Command {
public:
    TurnTVUp(ElectronicDevice & newDevice) : theDevice(newDevice) { }

    void execute() {
        theDevice.volumeUp();
    }

private:
    ElectronicDevice & theDevice;
};

class DeviceButton {
public:
    DeviceButton(Command & newCommand) : theCommand(newCommand) {}
    void press() {
        theCommand.execute();
    }
private:
    Command & theCommand;
};

class TVRemote {
public:
    static ElectronicDevice & getDevice() {
        Television & TV = *(new Television);
        return TV;
    }
};


void command_test() {
    cout << "COMMAND TESTING" << endl;
    ElectronicDevice & newDevice = TVRemote::getDevice();
    TurnTVOn onCommand(newDevice);
    DeviceButton onPressed(onCommand);
    onPressed.press();
}
