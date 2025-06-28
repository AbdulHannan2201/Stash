#include <bits/stdc++.h>

using namespace std;

class inventoryManager
{

    private:
    struct component
    {
       int ID;
       string name;
       string type;
       int quantity;
       string detials;
       
    };
    vector<component> inventory;

    struct table
    {
        /* data */
    };
    
    
    vector<component> DummyData()
    {
         return {
        {1, "HC-SR04", "Ultrasonic Sensor", 5, "Used for distance measurement"},
        {2, "ESP32", "Microcontroller", 3, "Bluetooth + WiFi enabled MCU"},
        {3, "DHT11", "Temperature Sensor", 10, "Measures temp and humidity"},
        {4, "L298N", "Motor Driver", 2, "Dual H-Bridge motor driver"},
        {5, "IR Sensor", "Obstacle Sensor", 6, "Infrared-based detection"},
        {6, "Servo SG90", "Actuator", 8, "180-degree micro servo motor"},
        {7, "LM35", "Temperature Sensor", 4, "Analog temperature sensor"},
        {8, "LED Red", "Indicator", 50, "General purpose 5mm red LED"},
        {9, "Relay 5V", "Switching Module", 3, "Electromechanical relay"},
        {10, "Buzzer", "Audio Output", 7, "Used for sound or alerts"},
        {11, "Joystick XY", "Input Device", 2, "Analog joystick module"},
        {12, "Breadboard 400pts", "Prototyping", 5, "Solderless breadboard"},
        {13, "Jumper Wires", "Connector", 100, "Male-Male assorted set"},
        {14, "9V Battery", "Battery", 6, "Standard rectangular battery"},
        {15, "BMP180", "Pressure Sensor", 2, "Barometric pressure + altitude"}
        };
    }

    public:
    inventoryManager()
    {
        std::cout << "\033[2J\033[1;1H";  // ANSI escape code
        cout<<"initialization";
        inventory = DummyData();
        cout<<"Sucessfully Added Dummy Data"<<endl;
        getList(inventory);

    }


    void getList(const vector<component>& inventory)
    {
        cout << string(110, '-');

        cout << "\n|"
         << std::left
         << std::setw(5) << " ID" << " | "
         << std::setw(24) << "Name" << " | "
         << std::setw(24) << "Type" << " | "
         << std::setw(5) << "Qty" << " | "
         << setw(38)<< "Details "<<"|";

        cout << "\n"<<string(110, '-') << "\n";


        for(const auto& item : inventory)
        {
            cout<<"|"<<right<<setw(5)<<item.ID<<" | "
            <<left<<setw(24)<<item.name<<" | "
            <<left<<setw(24)<<item.type<<" | "
            <<right<<setw(5)<<item.quantity<<" | "
            <<left<<setw(38)<<item.detials<<"|"<<endl;
        }

        cout << string(110, '-') << "\n";
    
    }

    void addItem(int id, string name, string type, int qty, string details)
    {
        component newitem = {id, name, type, qty, details};
        inventory.push_back(newitem);
        cout<<"new Item added : " << name <<endl;
    }

};


int main()
{
    inventoryManager obj;
    return 0;
}