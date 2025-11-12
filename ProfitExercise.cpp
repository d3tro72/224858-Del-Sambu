#include <iostream>
using namespace std;

int main()
{
    double buyingPrice, sellingPrice, profit;

    cout << "Enter the buying price of the vehicle:";
    cin >> buyingPrice;

    cout << "Enter the selling price of the vehicle:";
    cin >> sellingPrice;

    profit = sellingPrice - buyingPrice;

    cout << "The profit made on the vehicle is: " << profit << endl;

    return 0;
}