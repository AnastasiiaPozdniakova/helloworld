#include <iostream>

using namespace std;

int main ()
{
    cout << "What time is it";
    int hour = 0;
    cin >> hour;

    if (hour > 20)
        cout << "Go home!";
    else if (hour <= 20)
    cout << "Go to shop and buy bread";

}
