#include <iostream>
using namespace std;

int main() {
    double weight_p, weight_kg, height_in, height_m, BMI;

    cout << "Please enter weight (in pounds): ";
    cin >> weight_p;

    cout << "Please enter height (in inches): ";
    cin >> height_in;

    weight_kg = weight_p * 0.453592;
    height_m = height_in * 0.0254;
    BMI = weight_kg / (height_m*height_m);

    if(BMI >= 30){
        cout << "The weight status is: Obese" << endl;
    }
    else{
        if(BMI >= 25 && BMI < 30){
            cout << "The weight status is: Overweight" << endl;
        }
        else{
            if(BMI >= 18.5 && BMI < 25){
                cout << "The weight status is: Normal" << endl;
            }
            else{
                cout << "The weight status is: Underweight" << endl;
            }
        }
    }

    return 0;
}