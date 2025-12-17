#include <iostream>
using namespace std;

class TollBooth {
private:
    int totalVehicles;
    double totalRevenue;

public:
    TollBooth() {
        totalVehicles = 0;
        totalRevenue = 0.0;
    }

    // Reset both counters
    void reset() {
        totalVehicles = 0;
        totalRevenue = 0.0;
        cout << "Statistics reset successfully!\n";
    }

    // Vehicle pays toll
    void vehiclePayingToll(int vehicleType, double tollAmount) {
        totalVehicles++;

        // Add toll based on vehicle type
        totalRevenue += tollAmount;

        cout << "Toll collected successfully!\n";
    }

    // Getter methods
    int getTotalVehicles() {
        return totalVehicles;
    }

    double getTotalRevenue() {
        return totalRevenue;
    }
};

int main() {
    TollBooth booth;
    int choice;

    // Fixed tolls
    const double CAR_TOLL = 150.0;
    const double TRUCK_TOLL = 300.0;
    const double BUS_TOLL = 350.0;

    while (true) {
        cout << "\n===== TOLL BOOTH MENU =====\n";
        cout << "1. Add a standard car and collect toll\n";
        cout << "2. Add a truck and collect toll\n";
        cout << "3. Add a bus and collect toll\n";
        cout << "4. Display total cars/vehicles passed\n";
        cout << "5. Display total revenue collected\n";
        cout << "6. Reset booth statistics\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            booth.vehiclePayingToll(1, CAR_TOLL);
            break;

        case 2:
            booth.vehiclePayingToll(2, TRUCK_TOLL);
            break;

        case 3:
            booth.vehiclePayingToll(3, BUS_TOLL);
            break;

        case 4:
            cout << "Total Vehicles Passed: " 
                 << booth.getTotalVehicles() << endl;
            break;

        case 5:
            cout << "Total Revenue Collected: Rs. " 
                 << booth.getTotalRevenue() << endl;
            break;

        case 6:
            booth.reset();
            break;

        case 7:
            cout << "Exiting program...\n";
            return 0;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    }
}
