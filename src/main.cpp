#include <iostream>
using namespace std;

//if (!(booking_class <= 4 && booking_class >= 1)){
int main() {
    
    int booking_class, date_of_travel, meal, seat, membership, special_req,
        flight_duration;

        cout << "SkySail Airline" << '\n';
    do{
    cout << "Enter which class type you prefer. "<<endl;
    cout << "(1) Economy\t\t\t(3) Business\n(2) Premium Economy\t\t(4) First\nEnter: ";
    cin >> booking_class;
    cin.clear();
        cin.ignore(1,'\n');
        if (booking_class == 1)
        {
            system("cls");
            cout << "\n|You chose The Economy Class.|";
            break;
        }else if(booking_class == 2)
        {
            system("cls");
            cout << "\n|You chose The Premium Economy Class.|";
            break;
        }else if(booking_class == 3)
        {
            system("cls");
            cout << "\n|You chose The Business Class.|";
            break;
        }else if(booking_class == 4)
        {
            system("cls");
            cout << "\n|You chose The First Class.|";
            break;
        }else if (!(booking_class <= 4 && booking_class >= 1))
        {
            system("cls");
            cout << "\n##### Invalid Class #####\n\n";
        }
    } while (booking_class != 1 && booking_class != 2 && booking_class != 3 && booking_class != 4);  
    
    do
    {
        cout << "\n\nDate of Travel" << '\n';
        cout << "\t1. Peak" << '\n';
        cout << "\t2. Off-peak" << '\n';

        cout << "Date of Travel: ";
        cin >> date_of_travel;
        cin.clear();
        cin.ignore(1,'\n');
        if (date_of_travel != 1 && date_of_travel != 2){
            system("cls");
            cout << "\n##### Invalid Date of Travel. #####";
        }
        else{system("cls"); break;}

    }while (date_of_travel != 1 && date_of_travel != 2);
    do
    {
        cout << "\n\nChoose your Meal Preference:" << '\n';
        cout <<"\n(1) Meat\t\t(2) Vegetarian\n";
        cout << "(3) Vegan\t\t(4) Gluten-Free\n";

        cout << "\nEnter Meal Preference: ";
        cin >> meal;
        cin.clear();
        cin.ignore(100,'\n');
        if (meal != 1 && meal != 2 && meal != 3 && meal != 4){
            system("cls");
            cout << "\n##### Meal Preference Unavailable #####\n";
        } 
        else{system("cls"); break;}
    }while (meal != 1 && meal != 2 && meal != 3 && meal != 4);
    do{
        cout << "\n\nSeat Preference:" << '\n';
        cout << "\t(1) Aisle" << "\t\t(3) Middle" << '\n';
        cout << "\t(2) Window" << "\t\t(4) Near restroom" << '\n';

        cout << "Enter Seat Preference: ";
        cin >> seat;
        cin.clear();
        cin.ignore(100,'\n');
        if (seat != 1 && seat != 2 && seat != 3 && seat != 4){
            system("cls");
            cout << "\n##### Invalid Seat Preference. #####";
        }
        else {system("cls"); break;} 
    }while (seat != 1 && seat != 2 && seat != 3 && seat != 4);
   do{
        cout << "\n\nLoyalty Membership:" << '\n';
        cout << "\t(1) Gold" << "\t\t(3) Bronze" << '\n';
        cout << "\t(2) Silver" << "\t\t(4) None" << '\n';
    
        cout << "Enter: ";
        cin >> membership;
        cin.clear();
        cin.ignore(100,'\n');
        if (membership != 1 && membership != 2 && membership != 3 && membership != 4){
            system("cls");
            cout << "\n##### Option Non-Applicable #####\n";
        }else{system("cls"); break;}
    }while (membership != 1 && membership != 2 && membership != 3 && membership != 4);
    do{
        cout << "\n\nSpecial Requirements:" << '\n';
        cout << "\t(1) Wheelchair access" << "\t\t(3) Extra legroom." << '\n';
        cout << "\t(2) Near restroom" << "\t\t(4) None" << '\n';

        cout << "Special Requirements: ";
        cin >> special_req;
        cin.clear();
        cin.ignore(100,'\n');
        if (special_req != 1 && special_req != 2 && special_req != 3 && special_req != 4){
            system("cls");
            cout << "\n##### Option Non-Applicable #####\n";
        }else {system("cls"); break;}
    }while (special_req != 1 && special_req != 2 && special_req != 3 && special_req != 4);
    do{
    cout << "Enter Duration of Flight (Hours): ";
    cin >> flight_duration;
    cin.clear();
    cin.ignore(1,'\n');
    if ( flight_duration < 3 ) {cout << "\n| Short-Haul Flight |\n"; break;}
    else if (flight_duration > 3 && flight_duration < 6) {cout << "\n| Medium-Haul Flight |\n"; break;}
    else if(flight_duration > 6) {cout << "\n| Long-Haul Flight |\n\n"; break;}
    else if(!(flight_duration <= 0)) {cout <<"\n| Invalid Hours |\n\n";}
    }while (!(flight_duration <= 0));

        if (booking_class == 4) {
            cout << "Offers free Wi-Fi" << '\n';
            if (membership == 1) {
                cout << "Offers complimentary lounge access" << '\n';
            }
            if (meal == 3 || meal == 4) {
                cout << "Confirms special meal 48 hours prior to the flight"
                     << '\n';
            }
            if (seat == 2 && flight_duration > 6) {
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
        if (flight_duration < 3) {
            if (meal == 1 || meal == 3) {
                cout << "Offers complimentary snack box" << '\n';
            }
        } else if (flight_duration > 3 && flight_duration < 6) {
            if (seat == 2) {
                cout << "Ensures an in-flight entertainment system with "
                        "charging "
                        "port"
                     << '\n';
            }
        } else if (flight_duration > 6) {
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
    return 0;
}
