#include <iostream>
using namespace std;
int main() {
    int aiosdjfilasdjflasdj;
    int booking_class, date_of_travel, meal, seat, membership, special_req,
        flight_duration;
    while (true) {
        cout << "SkySail Airline" << '\n';
        cout << "Please enter the number that correspond with your choice"
             << '\n';
        cout << "Booking class:" << '\n';
        cout << "\t1. Economy" << '\n';
        cout << "\t2. Premium Economy" << '\n';
        cout << "\t3. Business Class" << '\n';
        cout << "\t4. Firt Class" << '\n';

        cout << "\nBooking class: ";
        cin >> booking_class;
        break;
        system("clear");

        cout << "\nDate of Travel" << '\n';
        cout << "\t1. Peak" << '\n';
        cout << "\t2. Off-peak" << '\n';

        cout << "Date of Travel: ";
        cin >> date_of_travel;
        system("clear");

        cout << "\nMeal Preference:" << '\n';
        cout << "\t1. Vegetarian" << '\n';
        cout << "\t2. Non-vegetarian" << '\n';
        cout << "\t3. Vegan" << '\n';
        cout << "\t4. Gluten-free" << '\n';

        cout << "\nMeal Preference: ";
        cin >> meal;
        system("clear");

        cout << "\nSeat Preference:" << '\n';
        cout << "\t1. Aisle" << '\n';
        cout << "\t2. Window" << '\n';
        cout << "\t3. Middle" << '\n';
        cout << "\t4. Near restroom" << '\n';

        cout << "Seat Preference: ";
        cin >> seat;
        system("clear");

        cout << "\nLoyalty Membership:" << '\n';
        cout << "\t1. Gold" << '\n';
        cout << "\t2. Silver" << '\n';
        cout << "\t3. Bronze" << '\n';
        cout << "\t4. None" << '\n';

        cout << "Loyalty Membership: ";
        cin >> membership;
        system("clear");

        cout << "\nSpecial Requirements:" << '\n';
        cout << "\t1. Wheelchair access" << '\n';
        cout << "\t2. Near restroom" << '\n';
        cout << "\t3. Extra legroom." << '\n';
        cout << "\t4. None" << '\n';

        cout << "Special Requirements: ";
        cin >> special_req;
        system("clear");

        cout << "\nDuration of Flight:" << '\n';
        cout << "\t1. Short-haul ( < 3 hours )" << '\n';
        cout << "\t2. Medium-haul ( 3 - 6 hours )" << '\n';
        cout << "\t3. Long-haul ( > 6 hours )" << '\n';

        cout << "Duration of Flight: ";
        cin >> flight_duration;
        system("clear");

        /* cout << '\n' */
        /*      << booking_class << '\n' */
        /*      << date_of_travel << '\n' */
        /*      << meal << '\n' */
        /*      << seat << '\n' */
        /*      << membership << '\n' */
        /*      << special_req << '\n' */
        /*      << flight_duration << '\n'; */

        if (booking_class == 4) {
            cout << "Offers free Wi-Fi" << '\n';
            if (membership == 1) {
                cout << "Offers complimentary lounge access" << '\n';
            }
            if (meal == 3 || meal == 4) {
                cout << "Confirms special meal 48 hours prior to the flight"
                     << '\n';
            }
            if (seat == 2 && flight_duration == 3) {
                cout << "Offers a complimentary sleeping kit" << '\n';
            }
        }
        if (booking_class == 3) {
            if (membership == 1 || membership == 2) {
                cout << "Offers priority boarding" << '\n';
            }
            if (flight_duration == 3 && seat == 1) {
                cout << "Offers free drink voucher" << '\n';
            }
        }
        if (booking_class == 2) {
            if (date_of_travel == 1) {
                cout << "Checking for available discounts for next book"
                     << '\n';
            }
            if (special_req == 3) {
                cout << "Allocates front-row seats" << '\n';
            }
        }
        if (booking_class == 1) {
            if (membership == 3) {
                cout << "Offers 5% discount on in-flight meals" << '\n';
            }
            if (special_req == 1) {
                cout << "Ensure ground staff assistance during borading and "
                        "de-boarding"
                     << '\n';
            }
        }
        if (flight_duration == 1) {
            if (meal == 1 || meal == 3) {
                cout << "Offers complimentary snack box" << '\n';
            }
        } else if (flight_duration == 2) {
            if (seat == 2) {
                cout << "Ensures an in-flight entertainment system with "
                        "charging "
                        "port"
                     << '\n';
            }
        } else if (flight_duration == 3) {
            cout << "Provides blankets and headphones to all passenger" << '\n';
            if (booking_class == 1 && seat == 3) {
                cout << "Offers a complimentary neck pillow" << '\n';
            }
        }
        if (seat == 4) {
            cout << "Ensure it's not next to emergency exits due to security "
                    "regulations"
                 << '\n';
        }
        if (special_req == 1) {
            cout
                << "allocate seats close to the entrance and ensure assistance "
                   "during transit."
                << '\n';
        }
    }

    return 0;
}
