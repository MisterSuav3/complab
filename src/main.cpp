#include <iostream>
using namespace std;
int main() {
    int booking_class, date_of_travel, meal, seat, membership, special_req, flight_duration; 
    cout << "SkySail Airline" << '\n';
    cout << "Please enter the number that correspond with your choice" << '\n';
    cout << "Booking class:" << '\n';
    cout << "\t1. Economy" << '\n';
    cout << "\t2. Premium Economy" << '\n';
    cout << "\t3. Business Class" << '\n';
    cout << "\t4. Firt Class" << '\n';

    cout << "\nBooking class: ";
    cin >> booking_class;

    cout << "\nDate of Travel" << '\n';
    cout << "\t1. Peak" << '\n';
    cout << "\t2. Off-peak" << '\n';

    cout << "Date of Travel: ";
    cin >> date_of_travel;

    cout << "\nMeal Preference:" << '\n';
    cout << "\t1. Vegetarian" << '\n';
    cout << "\t2. Non-vegetarian" << '\n';
    cout << "\t3. Vegan" << '\n';
    cout << "\t4. Gluten-free" << '\n';

    cout << "\nMeal Preference: ";
    cin >> meal;

    cout << "\nSeat Preference:" << '\n';
    cout << "\t1. Aisle" << '\n';
    cout << "\t2. Window" << '\n';
    cout << "\t3. Middle" << '\n';

    cout << "Seat Preference: ";
    cin >> seat;

    cout << "\nLoyalty Membership:" << '\n';
    cout << "\t1. Gold" << '\n';
    cout << "\t2. Silver" << '\n';
    cout << "\t3. Bronze" << '\n';
    cout << "\t4. None" << '\n';

    cout << "Loyalty Membership: ";
    cin >> membership;

    cout << "\nSpecial Requirements:" << '\n';
    cout << "\t1. Wheelchair access" << '\n';
    cout << "\t2. Near restroom" << '\n';
    cout << "\t3. Extra legroom." << '\n';
    cout << "\t4. None" << '\n';

    cout << "Special Requirements: ";
    cin >> special_req;

    cout << "\nDuration of Flight:" << '\n';
    cout << "\t1. Short-haul ( < 3 hours )" << '\n';
    cout << "\t2. Medium-haul ( 3 - 6 hours )" << '\n';
    cout << "\t3. Long-haul ( > 6 hours )" << '\n';

    cout << "Duration of Flight: ";
    cin >> flight_duration;
    
    cout << '\n' << booking_class << '\n' << date_of_travel << '\n' << meal << '\n' << seat << '\n' << membership << '\n' << special_req << '\n' << flight_duration;

    return 0;
}
