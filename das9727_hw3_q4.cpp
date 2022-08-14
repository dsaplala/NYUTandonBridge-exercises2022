#include <iostream>
using namespace std;


int main() {
    const int FLOOR_ROUND = 1;
    const int CEILING_ROUND = 2;
    const int ROUND = 3;
    double realNum;
    int userInput;

    cout << "Please enter a Real number: " <<endl;
    cin >> realNum;

    cout << "Choose your rounding method: "<<endl;
    cout << "1. Floor round"<<endl;
    cout << "2. Ceiling round"<<endl;
    cout << "3. Round to the nearest whole number"<<endl;
    cin >> userInput;

    switch(userInput){
        case FLOOR_ROUND:
            if(realNum > 0)
                cout << (int)realNum <<endl;
            else
                cout << (int)realNum - 1 <<endl;
            break;
        case CEILING_ROUND:
            if(realNum > 0)
                cout << (int)realNum + 1 <<endl;
            else
                cout << (int)realNum <<endl;
            break;
        case ROUND:
            if(realNum > 0){
                cout << (int)(realNum + 0.5) <<endl;
            }
            else{
                cout << (int)(realNum - 0.5) <<endl;
            }
            break;
        default:
            cout << "Please re-enter choice of rounding method" << endl;
    }
    return 0;
}