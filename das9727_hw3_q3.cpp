#include <iostream>
#include <cmath>
using namespace std;


int main() {
    double a,b,c,X1,X2,discriminant;

    cout<<"Please enter value of a: ";
    cin>>a;
    cout<<"Please enter value of b: ";
    cin>>b;
    cout<<"Please enter value of c: ";
    cin>>c;

    discriminant = b*b - 4.0*a*c;
    X1 = (-b - sqrt(discriminant))/(2.0*a);
    X2 = (-b + sqrt(discriminant))/(2.0*a);

    if(a == 0){
        if(b == 0){
            if(c==0)
                cout << "This equation has infinite number of solutions"<<endl;
            else
                cout << "This equation has no solution"<<endl;
        }
        else{
            if(c!=0)
                cout << "This linear equation has a single real solution x=" << -c/b <<endl;
            else
                cout << "This linear equation has a single real solution x=0" <<endl;
        }
    }
    else{
        if(discriminant > 0)
            cout << "This equation has two real solutions X1=" << X1 << " and X2=" << X2 <<endl;
        else{
            if(discriminant == 0)
                cout << "This equation has one real solution x=" << X2 << endl;
            else 
                cout << "This equation has no real solutions" << endl;
        }
    }

    return 0;
}