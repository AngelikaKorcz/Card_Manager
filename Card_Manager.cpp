#include <iostream>
#include "Manager.h"

using namespace std;

int main() {


    CardsReader a;
    while (true)
    {
        int wybor, id;
        string nazwa, data, numer;

        cout << "Select Option: " << endl;
        cout << "1.Show all cards." << endl;
        cout << "2.Show selected card." << endl;
        cout << "3.Add a card." << endl;
        cout << "4.Remove card." << endl;
        cout << "5.Exit." << endl;
        cin >> wybor;
        switch (wybor) {
        case 1:
            cout << endl;
            a.print_all_cards();
            cout << endl;
            break;
        case 2:
            cout << endl;
            cout << "Enter the card ID: ";
            cin >> id;
            a.print_card(id);
            cout << endl;
            break;
        case 3:
            cout << endl;
            cout << "Bank name: "; cin >> nazwa;
            cout << "Card number: "; cin >> numer;
            cout << "Expiration date" << endl; cin >> data;
            if (a.Luhn_algorithm(numer) == true)
            {
                a.add_card(nazwa, numer, data);
                cout << "Added card: " << nazwa << "," << numer << "," << data << endl;
            }
            else
            {
                cout << "Invalid card number! " << endl;
            }

            break;
        case 4:
            cout << "Enter card ID: ";
            cin >> id;
            a.delete_card(id);
            cout << "Card with ID: " << id << " removed." << endl;
            break;
        case 5:
            cout << "Leaving the porgram..." << endl;
            return 0;
        default:
            cout << "The operation cannot be performed. Please enter another number." << endl;
            break;


        }
    }

}