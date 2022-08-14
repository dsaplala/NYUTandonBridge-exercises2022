#include <iostream>
using namespace std;

int main() {
    
    double quarters, dimes, nickels, pennies, dollars, cents, total;
    
    cout << "Please enter number of coins: \n# of quarters:";
    cin >> quarters;
    cout << "# of dimes: "; 
    cin >> dimes;
    cout << "# of nickels: ";
    cin >> nickels;
    cout << "# of pennies: ";
    cin >> pennies;
    
    total = 0.25*quarters + 0.1*dimes + 0.05*nickels + 0.01*pennies;
    dollars = int(total);
    cents = (100*(total - dollars));
    
    cout << "The total is " <<dollars<<" dollars and "<<cents<< " cents" << endl;
    
    return 0;
}