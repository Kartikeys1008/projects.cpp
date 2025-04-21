#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

// Structure to store room details
struct Room {
    int id;
    string type;
    double price;
    bool isBooked;
};

// Function to display the About Us page
void displayAboutUs() {
    cout << "\n===== About Us =====\n";
    cout << "Welcome to KESAR VILLAS HOTEL\n";
    cout << "We offer the best services to make your stay comfortable and memorable.\n";
    cout << "Our hotel provides four categories of rooms: TYPE A, TYPE B, TYPE C AND JEWELS.\n";
    cout << "We value our customers and strive to deliver exceptional hospitality.\n";
    cout << "=====================\n";
}

// Function to display available rooms
void displayRooms(const vector<Room>& rooms) {
    cout<<"----------------*      *      *---------------------"<<endl;
    cout<<"-----------*     * *  * *  * *     *----------------"<<endl;
    cout<<"-----*     * *  *    *   *    *  * *     *----------"<<endl;
    cout<<"------* * *    *    *     *    *    * * *-----------"<<endl;
    cout<<"-----*    *   *    *       *    *   *    *----------"<<endl;
    cout<<"-------*   *    *   *     *   *    *   *------------"<<endl;
    cout<<"----------**  **  **  ***  **  **  **---------------"<<endl;
    cout<<"****************KASER VILLAS MEHAL ******************"<<endl;
    cout<<"---------------------& HOTEL------------------------"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"                                                    "<<endl;
    cout<<"----------------- .KHAMMA GHANNI.-------------------"<<endl;
    cout<<"       .WELCOME TO KESAR VILLAS MEHAL & HOTEL.      "<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"       We have four types of rooms available        "<<endl;
    cout<<"                       |                            "<<endl;
    cout<<"     __________________|___________________         "<<endl;
    cout<<"     |          |             |           |         "<<endl;
    cout<<"   TYPE A     TYPE B        TYPE C      JEWELS      "<<endl;
    cout<<"                                                    "<<endl;
    cout<<"                                                    "<<endl;
    cout<<"----------------------TYPE A------------------------"<<endl;
    cout<<"                PRICE :- Rs.5000                    "<<endl;
    cout<<"               Facilities available :-              "<<endl;
     
    cout<<"     _________________________________________      "<<endl;
    cout<<"     |.BREAKFAST, LUNCH , DINNER.             |     "<<endl;
    cout<<"     |________________________________________|     "<<endl;
    cout<<"     |.REST ROOM (BESED ON THEME AS YOU WANT) |     "<<endl;
    cout<<"     |________________________________________|     "<<endl;
    cout<<"     |.A SMALL JAIPUR TOUR WITH GUIDE         |     "<<endl;
    cout<<"     |________________________________________|     "<<endl;
    cout<<"     |.IN LAST WE ARE PROVIDING A COPPER COIN |     "<<endl;
    cout<<"     |           (WITH HOTEL SYMBOL)          |     "<<endl;     
    cout<<"     |________________________________________|     "<<endl;
    cout<<"                                                    "<<endl;
   
    cout<<"----------------------------------------------------"<<endl;
    cout<<"                                                    "<<endl;
    cout<<"----------------------TYPE B------------------------"<<endl;
    cout<<"                PRICE :- Rs.8000                    "<<endl;
    cout<<"               Facilities available:-               "<<endl;
    cout<<"     _________________________________________      "<<endl;
    cout<<"     | .BREAKFAST , LUNCH , DINNER .          |     "<<endl;
    cout<<"     |________________________________________|     "<<endl;
    cout<<"     | .LARGE REST ROOM WITH KING SIZE BED.   |     "<<endl;
    cout<<"     |       (BESED ON THEME AS YOU WANT)     |     "<<endl;
    cout<<"     |________________________________________|     "<<endl;                          
    cout<<"     | .A SMALL JAIPUR TOUR WITH GUIDE.       |     "<<endl;
    cout<<"     | (including historical places & museums)|     "<<endl;
    cout<<"     |________________________________________|     "<<endl;
    cout<<"     | .IN LAST WE ARE PROVIDING A SIVER COIN.|     "<<endl;
    cout<<"     |           (WITH HOTEL SYMBOL)          |     "<<endl;     
    cout<<"     |________________________________________|     "<<endl;
    cout<<"                                                    "<<endl;
   
    cout<<"----------------------------------------------------"<<endl;
    cout<<"                                                    "<<endl;
    cout<<"----------------------TYPE C------------------------"<<endl;
    cout<<"                 PRICE :- Rs.12000                  "<<endl;
    cout<<"               Facilities Available:-               "<<endl;
    cout<<"     ___________________________________________    "<<endl;
    cout<<"     |.BREAKFAST , LUNCH , DINNER.              |   "<<endl;
    cout<<"     |__________________________________________|   "<<endl;
    cout<<"     |.LARGE REST ROOM WITH KING SIZE BED.      |   "<<endl;
    cout<<"     |    (BESED ON THEME AS YOU WANT)          |   "<<endl;
    cout<<"     |__________________________________________|   "<<endl;
    cout<<"     |.JACUZZIS.                                |   "<<endl;
    cout<<"     |__________________________________________|   "<<endl;                          
    cout<<"     |.A SMALL JAIPUR TOUR WITH GUIDE.          |   "<<endl;
    cout<<"     | (including historical places , museums   |   "<<endl;
    cout<<"     |                 temples)                 |   "<<endl;
    cout<<"     |__________________________________________|   "<<endl;
    cout<<"     |.IN LAST WE ARE PROVIDING 10gm SIVER COIN.|   "<<endl;
    cout<<"     |           (WITH HOTEL SYMBOL)            |   "<<endl;     
    cout<<"     |__________________________________________|   "<<endl;
    cout<<"                                                    "<<endl;
   
    cout<<"----------------------------------------------------"<<endl;
    cout<<"                                                    "<<endl;
    cout<<"                                                    "<<endl;
    cout<<"       ||    _____               _____             ___ "<<endl;
    cout<<"-      ||--||      --||    ||--||     --||     --||   ||"<<endl;
    cout<<"-      ||--||_____ --||    ||--||_____--||     --||___   "<<endl;
    cout<<"-||    ||--||      --|| /\\ ||--||     --||     --     ||"<<endl;
    cout<<"-||____||--||_____ --||/  \\||--||_____--||_____--||___||"<<endl;
    cout<<"                                                     "<<endl;
    cout<<"                PRICE :- Rs.18000                   "<<endl;
    cout<<"              facilities Available:-                 "<<endl;
    cout<<"     __________________________________________      "<<endl;
    cout<<"     |.BREAKFAST , LUNCH , DINNER              |     "<<endl;
    cout<<"     | WITH ALL FAMOUS DISHES OF EUROPE        |     "<<endl;
    cout<<"     | AS WELL AS OTHER COUNTRIES.             |     "<<endl;  
    cout<<"     |_________________________________________|     "<<endl;                  
    cout<<"     |.LARGE REST ROOM WITH KING SIZE BED.     |     "<<endl;
    cout<<"     |      (BESED ON THEME AS YOU WANT)       |     "<<endl;
    cout<<"     |_________________________________________|     "<<endl;
    cout<<"     |.JACUZZIS SWIMMINGPOOL.                  |     "<<endl;
    cout<<"     |_________________________________________|     "<<endl;
    cout<<"     |.A SMALL JAIPUR TOUR WITH GUIDE.         |     "<<endl;
    cout<<"     |_________________________________________|     "<<endl;
    cout<<"     |  (including historical places ,museums) |     "<<endl;
    cout<<"     |_________________________________________|     "<<endl;
    cout<<"     |.ADVENTURE TOUR AND FUN ACTIVITIES.      |     "<<endl;
    cout<<"     |_________________________________________|     "<<endl;
    cout<<"     |.IN LAST WE ARE PROVIDING 1gm GOLD COIN. |     "<<endl;     
    cout<<"     |           (WITH HOTEL SYMBOL)           |     "<<endl;
    cout<<"     |_________________________________________|     "<<endl;
    cout<<"                                                     "<<endl;
   
    cout<<"----------------------------------------------------"<<endl;
    cout<<"                                                    "<<endl;
    cout<<"AMENITIES :- Wifi, Pickup and Drop facilities.      "<<endl;
    cout<<"                                                    "<<endl;
    cout<<"----------------------------------------------------"<<endl;
    for (const auto& room : rooms) {
        if (!room.isBooked) {
            cout << "Room ID: " << room.id 
                 << " | Type: " << room.type 
                 << " | Price: Rs." << room.price << " per night\n";
        }
    }
    cout << "===========================\n";
}

// Function to book a room
void bookRoom(vector<Room>& rooms) {
    int roomId;
    cout << "\nEnter the Room ID you want to book: ";
    cin >> roomId;
    string name,lstname,email,city;
    int days,roomnum,tprice;
     
    for (auto& room : rooms) {
        if (room.id == roomId) {
            if (!room.isBooked) {
                room.isBooked = true;
                 cout << "Please enter number of days you want to stay: ";
                 cin >> days;
                 cout << "Enter number of rooms: "<<endl;
                 cin >> roomnum;
                 tprice=room.price * roomnum * days;
                 cout << "Total amount: Rs." << tprice << endl;
                 cout << "Please enter your name:"<<endl;
                 cin >> name;
                 cin >> lstname;
                 cout << "Please enter your email ID: "<<endl;
                 cin >> email;
                 cout << "Enter your city name: "<<endl;
                 cin >> city;
                 cout << "Room ID " << room.id << " (" << room.type << ") has been successfully booked.\n";
                 {   ofstream file(name+to_string(roomId)+" "+"days"+to_string(days)+".txt");
            file << "  WELCOME IN KESAR VILAS:-" << endl;
            file << "  NAME:- " << name <<" "<< lstname << endl;
            file << "  EMAIL:- " << email << endl;
            file << "  CITY:- " << city << endl;
            file << "  DAYS:- " << days << endl;
            file << "  NO. OF ROOM(S):- " << roomnum << endl;
            file << "  TOTAL PRICE:- "<< tprice <<endl;
             file.close();
            string text;
            ifstream readfile(name+to_string(roomId)+" "+"days"+to_string(days)+".txt");
            while (getline(readfile,text))
            {
                cout << text;
	    }
	  readfile.close();
                }
            } else {
                cout << "Sorry, this room is already booked.\n";
            }
            return;
           
        }
    }
    cout << "Invalid Room ID. Please try again.\n";

}

// Function to register for membership
void registerMembership() {
    string name, email, phone;
    cout << "\n===== Membership Registration =====\n";
    cout << "Enter your full name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter your email: ";
    getline(cin, email);
    cout << "Enter your phone number: ";
    getline(cin, phone);
    cout << "Thank you, " << name << "! You are now a valued member of our hotel.\n";
    cout << "====================================\n";
}

// Main menu
int main() {
    vector<Room> rooms = {
        {101, "TYPE A", 5000, false},
        {102, "TYPE B", 8000, false},
        {103, "TYPE C", 12000, false},
        {104, "JEWELS", 18000, false}
    };
    int choice;

    do {
        cout << "\n===== Hotel Booking Application =====\n";
        cout << "1. View Available Rooms\n";
        cout << "2. Book a Room\n";
        cout << "3. Register for Membership\n";
        cout << "4. About Us\n";
        cout << "5. Exit\n";
        cout << "=====================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayRooms(rooms);
                break;
            case 2:
                bookRoom(rooms);
                break;
            case 3:
                registerMembership();
                break;
            case 4:
                displayAboutUs();
                break;
            case 5:
                cout << "Thank you for using KESAR VILLAS HOTEL Booking Application. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}