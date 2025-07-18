# 🔧 STASH – Smart Tracker & Storage Hub

> 🎯 A personal C++ inventory system to manage, track, and organize your stash of electronics, sensors, and components.

STASH is a minimal, fast, and fully offline **Inventory Management System** designed for electronics enthusiasts, robotics developers, and makers to catalog their parts using a clean Command-Line Interface (CLI).  
Built from scratch in **C++**, it offers a modular structure and is designed to grow with your skills.

---

## 📦 Features

- 🔍 Add, update, and delete component entries
- 🧮 Display inventory in a well-formatted table
- ⚙️ Quantity alerts for low-stock components
- 📁 Save/Load from CSV or JSON (planned)
- 🧼 Clear screen for aesthetic terminal UI
- 🧠 Scalable structure using classes and `struct`
- 🛠️ Designed to evolve into a GUI or DB-based system

---

## 🚀 Getting Started

### 🔧 Build Instructions

```bash
# Build STASH using g++
g++ -std=c++17 -Iinclude -o stash src/*.cpp

# Run it
./stash
💡 Windows users: Replace clear with cls in clearScreen() function.

🧑‍💻 Why STASH?
As an electronics and robotics hobbyist, I often struggled to remember what parts I had available during prototyping. STASH is built as:

🧠 A C++ learning project

📋 A real-world utility tool

🔄 A base for future expansion to GUI, JSON, or even SQLite integration

📁 Project Structure
bash
Copy
Edit
STASH/
├── include/              # Header files
│   └── inventory.hpp
├── src/                  # Source code
│   ├── main.cpp
│   ├── inventory.cpp
│   └── filehandler.cpp   # (planned for CSV/JSON)
├── data/                 # Saved inventory files
│   └── inventory.csv
├── lib/                  # External libraries (e.g. json.hpp)
│   └── json.hpp
├── Makefile              # Easy build
└── README.md             # This file
🧠 Concepts Covered
Concept	Description
struct and class	For data modeling and OOP
vector, string, iomanip	STL containers & formatting
File I/O	Planned for CSV and JSON
ANSI Escape Codes	For UI screen clearing
Modular Design	Separation of concerns and reusability

📌 To-Do
 Load dummy data

 Display table in CLI

 Add component support

 Delete / Update item

 Save/load to CSV

 JSON export with nlohmann/json

 Quantity threshold alerts

 GUI interface using Qt or Dear ImGui

🧠 Sample Output
markdown
Copy
Edit
ID   | Name                 | Type                 | Qty      | Details
---------------------------------------------------------------------------
1    | HC-SR04              | Ultrasonic Sensor    | 5        | Used for distance measurement
2    | ESP32                | Microcontroller      | 3        | Bluetooth + WiFi enabled MCU
...