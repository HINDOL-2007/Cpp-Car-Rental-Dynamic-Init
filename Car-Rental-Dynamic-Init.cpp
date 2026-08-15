#include <iostream>
using namespace std;
class CarRental
{
    int days, basePrice;
    float taxRate, finalBill;

public:
    CarRental()
    {
        // The Blank Slate
    }
    CarRental(int d, int b, float t)
    {
        days = d;
        basePrice = b;
        taxRate = t;
        finalBill = (days * basePrice) + ((days * basePrice) * taxRate);
    }
    CarRental(int d, int b, int t)
    {
        days = d;
        basePrice = b;
        taxRate = float(t) / 100;
        finalBill = (days * basePrice) + ((days * basePrice) * taxRate);
    }
    void showBill()
    {
        cout << "You Rent a Car about " << days << " days , the Base Price of the Car is (Rupees) :- " << basePrice << " ." << "\nYour Total Bill is :- " << finalBill << "(Rupees) ." << endl
             << endl;
    }
};
int main()
{
    int d, b, T;
    float t;
    CarRental customer1, customer2;
    cout << "Enter How many days Coustomer Rent a car :- ";
    cin >> d;
    cout << "Enter the Base proce of that car (Rupees) :- ";
    cin >> b;
    cout << "Enter the Tax Rate of the Government (Decimal Tax) :- ";
    cin >> t;
    customer1 = CarRental(d, b, t);
    customer1.showBill();

    cout << "Enter How many days Coustomer Rent a car :- ";
    cin >> d;
    cout << "Enter the Base price of that car (Rupees) :- ";
    cin >> b;
    cout << "Enter the Tax Rate of the Government (Percentage Tax) :- ";
    cin >> T;
    customer2 = CarRental(d, b, T);
    customer2.showBill();

    return 0;
}
