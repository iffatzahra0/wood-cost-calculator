#include <iostream>
#include <string>

using namespace std;

// Function to calculate board feet
double boardperfeet(float pieces, float width, float height, float length) { 
    return (width * length * height * pieces) / 12;
}

// Function to get price based on wood type
double price(char letter) {
    switch (letter){
        case 'T': return 0.0;
        case 'P': return 0.89;
        case 'F': return 1.09;
        case 'C': return 2.26;
        case 'M': return 4.50;
        case 'O': return 3.10;
        default:
            
            return false; // signal error
    }
}

int main() {
    float length, pieces, width, height;
    char letter;
    double total = 0.0;

    while (true) {
        cout << "\nSelect wood and enter its dimensions:\n";
        cout << "WOOD\tPRICE/BOARD FT\n";
        cout << "1. Pine \t0.89\n2. Fir \t\t1.09\n3. Cedar \t2.26\n4. Maple \t4.50\n5. Oak \t\t3.10\n";
        cout << "Enter T to total and exit.\n";
        cout<<"-----------ENTER CAPITAL LETTERS ONLY-----------"<<endl;
        cout << "--> ENTER (letter pieces width(in) height(in) length(ft)): ";

        cin >> letter;

        if (letter == 'T') {
            break;
        }


        cin >> pieces >> width >> height >> length;

        double wood_price = price(letter);
        if (wood_price == false){
             continue;
    } // Skipping invalid input
        double boardft = boardperfeet(pieces, width, height, length);
        double cost = wood_price * boardft;
        total += cost;

        cout << "Cost for this wood:" << cost<<"$" << endl;
        
    }

    cout << "---> Final Total: " << total <<"$"<< endl;
    return 0;
}