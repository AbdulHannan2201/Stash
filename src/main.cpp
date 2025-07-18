#include <bits/stdc++.h>
#include <stdlib.h>
#include "utils.hpp"
using namespace std;

 // g++ -std=c++17 src/main.cpp src/utils.cpp  -Iinclude -o stash

class inventoryManager
{

    private:
    struct components
    {
       int ID;
       string name;
       string type;
       int quantity;
       string detials;
       
    };
    vector<components> inventory;
    
    vector<components> DummyData()
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

    // selected option
    int option = 0;
    int curid = 15;

    public:
    inventoryManager()
    {
        typeOut(prntRed("Loading PLease Wait ................"), 50);
        // std::cout << "\033[2J\033[1;1H";  // ANSI escape code
        cout<<"initialization";
        inventory = DummyData();
        cout<<" /n Sucessfully Added Dummy Data"<<endl;
        // getList(inventory);

    }


    void getComponentList()
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

    void addComponent()
    {
        components newitem;

        cout<<prntGreen("Enter New Component Details")<<endl;
        cout<<prntRed("Current Component ID : ")<<curid+1<<endl;

        newitem.ID = curid + 1;

        cin.ignore();
        cout<<"Name : ";
        getline(cin,newitem.name);


        cout<<"Type : ";
        getline(cin,newitem.type);


        cout<<"Quantity : ";
        while(!(cin >> newitem.quantity))
        {
            cout<<prntRed("Error invalid input retry");
            cin.clear(); cin.ignore(1000,'\n');
        }

        cin.ignore();
        cout<< "Details : ";
        getline(cin,newitem.detials);
        
         cin.ignore();
            cout << "Details: ";
            getline(cin, newitem.detials);

            cout << "\n✅ Confirming Entry:\n";
            cout << "----------------------\n";
            cout << "ID: " << newitem.ID << "\n";
            cout << "Name: " << newitem.name << "\n";
            cout << "Type: " << newitem.type << "\n";
            cout << "Quantity: " << newitem.quantity << "\n";
            cout << "Details: " << newitem.detials << "\n";

            char confirm;
            cout << "Add this component to inventory? (y/n): ";
            cin >> confirm;

            if (tolower(confirm) == 'y') {
                inventory.push_back(newitem);
                cout << "✅ Component added successfully!\n";
            } else {
                cout << "❌ Component discarded.\n";
            }

        getComponentList();
    }

    int  displayMenu() {
    cout << "\n========= 📦 STASH: Inventory CLI =========\n";
    cout << "1. 📋  Show All Components\n";
    cout << "2. ➕  Add New Component\n";
    cout << "3. 🔍  Search Component by Name\n";
    cout << "4. ❌  Delete Component by ID\n";
    cout << "5. 💾  Save Inventory to File\n";
    cout << "6. 📂  Load Inventory from File\n";
    cout << "7. 🚪  Exit\n";
    cout << "===========================================\n";
    cout << "Enter your choice: ";
    
    cin>>option;
        return option;
    }

    


};


int main()
{
    int choise = 0;
    inventoryManager obj;
    
do
{
    choise = obj.displayMenu();

    switch (choise)
    {
    case 1: clrscr();  obj.getComponentList(); break;
    case 2: clrscr();  obj.addComponent(); break;
    case 7: clrscr();  typeOut(prntRed("Quiting ..............."), 50); break;
    default:
    break;
    }

}
while(choise!=7);    
    
    return 0;
}