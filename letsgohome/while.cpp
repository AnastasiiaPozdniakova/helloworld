#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    int count=1;

    while (count <= 20)
    {
        usleep(1000000); //stopping for 1 sec
        cout << "COUNT=" << count << endl;
        count=count+1;
    }
    cout << "while ended";
}
