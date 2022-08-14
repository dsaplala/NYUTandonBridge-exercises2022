#include <iostream>
using namespace std;

int main() {
    int John_days, John_hours, John_minutes, Bill_days, Bill_hours, Bill_minutes;
    float total_days, total_hours, total_minutes;
    
    cout << "Please enter the number of days John has worked: ";
    cin >> John_days;
    cout << "Please enter the number of hours John has worked: "; 
    cin >> John_hours;
    
    John_hours = John_days*24 + John_hours;
    
    cout << "Please enter the number of minutes John has worked: ";
    cin >> John_minutes;
    
    John_minutes = John_hours*60 + John_minutes;
    
    cout << "Please enter the number of days Bill has worked: ";
    cin >> Bill_days;
    cout << "Please enter the number of hours Bill has worked: ";
    cin >> Bill_hours;
    
    Bill_hours = Bill_days*24 + Bill_hours;
    
    cout << "Please enter the number of minutes Bill has worked: ";
    cin >> Bill_minutes;
    
    Bill_minutes = Bill_hours*60 + Bill_minutes;
    
    total_minutes = John_minutes + Bill_minutes;
    total_days = (int)(((total_minutes)/60)/24);

    total_minutes = total_minutes - (total_days)*1440;
    total_hours = (int)((total_minutes)/60);
    total_minutes = total_minutes - (total_hours)*60;
    
    cout << "The total time both of them worked together is: " << total_days << " days, " << total_hours << " hours and " << total_minutes << " minutes." << endl;
  
    
    return 0;
}