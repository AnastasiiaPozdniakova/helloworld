#include <iostream>

using namespace std;

int main ()
{
    int start = 9, finish = 18;

    cout << "What time is it?";
    int hour = 0;
    cin >> hour;

    // && И
    // 1 && 0 - 0
    // 0 && 1 - 0
    // 1 && 1 - 1
    // 0 && 0 - 0
    if (hour < finish  && hour >start )
        cout << "Go working";
    else if (hour > finish  || hour < start)
    // || или
    // 1 || 0 - 1   20
    // 0 || 1 - 1
    // 1 || 1 - 1
    // 0 || 0 - 0





    if (hour > 20)
        cout << "Go home!";
    else if (hour <= 20)
        cout << "Go to shop and buy bread";


}
