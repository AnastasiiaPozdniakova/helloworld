#include <iostream>
using namespace std;
int main()
{
    cout << "this is taxi";
    float distance =  0.0;
    cin >> distance;

    float distancemin = 1.5;
    float minprice = 5.0;
    float price = 20.0;

    while (distancemin < distance)
    {
        distancemin = distancemin  + 0.1;
        price = price + 0.5;
    }

    cout << price << endl;
}
