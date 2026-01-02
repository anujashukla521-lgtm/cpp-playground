#include <iostream>
#include <string>
using namespace std;

class Product
{
protected:
    string name;
    float price;

public:
    Product() {}
    Product(string n, float p)
    {
        name = n;
        price = p;
    }
};
class discountedProduct : public Product
{
    float discountPercent;
    float finalPrice;

public:
    discountedProduct() {}
    discountedProduct(string n, float p, float dp)
        : Product(n, p)
    {
        discountPercent = dp;
    }
    void priceCal(void)
    {
        finalPrice = price - (price * discountPercent / 100);
    }
    void show()
    {
        cout << "The final price of the product " << name
             << " with price " << price
             << " after discount percent of " << discountPercent
             << "% is " << finalPrice << endl;
    }
};
int main()
{
    string n;
    float p, dp;
    cout << "Enter name, price and discount percent of product" << endl;
    getline(cin, n);
    cin >> p >> dp;
    discountedProduct p1(n, p, dp);
    p1.priceCal();
    p1.show();
    return 0;
}