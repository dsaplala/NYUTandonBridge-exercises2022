#include <iostream>
using namespace std;

int main() {
    double price1, price2, taxRate;
    char club_card;
    double basePrice, totPrice;

    cout<<"Enter price of first item: ";
    cin>>price1;

    cout<<"Enter price of second item: ";
    cin>>price2;
    basePrice = price1 + price2;
    
    cout<<"Does customer have a club card? (Y/N)"; 
    cin>>club_card;

    cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax:";
    cin>>taxRate;

    cout<<"Base price:"<<basePrice<<endl;
    
    if(price1<price2)
        price1 = 0.5*price1;
    else
        price2 = 0.5*price2;
    
    switch(club_card){
        case 'Y':
            totPrice = 0.9*(price1+price2);
            cout<<"Price after discounts: "<<totPrice<<endl;
            totPrice = (1+(taxRate/100))*totPrice;
            std::cout.precision(7);
            cout<<"Total price: "<<totPrice<<endl;
            break;
        case 'y':
            totPrice = 0.9*(price1+price2);
            cout<<"Price after discounts: "<<totPrice<<endl;
            totPrice = (1+(taxRate/100))*totPrice;
            std::cout.precision(7);
            cout<<"Total price: "<<totPrice<<endl;
            break;
        case 'N':
            totPrice = price1+price2;
            cout<<"Price after discounts: "<<totPrice<<endl;
            totPrice = (1+(taxRate/100))*totPrice;
            std::cout.precision(7);
            cout<<"Total price: "<<totPrice<<endl;
            break;
        case 'n':
            totPrice = price1+price2;
            cout<<"Price after discounts: "<<totPrice<<endl;
            totPrice = (1+(taxRate/100))*totPrice;
            std::cout.precision(7);
            cout<<"Total price: "<<totPrice<<endl;
            break;
        default:
            cout<<"Please re-enter inputs";
            break;
    }
    return 0;
}