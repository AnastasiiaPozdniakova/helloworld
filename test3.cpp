//  Ділити число на два поки воно не стане менше одиниці.
//  Число має бути більше 1.0
//  Відповідь - кількіть скільи разів ми поділили на два щоб отримати резльтут менше ніж 1.0
#include <iostream>

using namespace std;

int main ()
{
    float n = 0.0,i = 2000.0;
    int count = 0;

    while (n <= i)
    {
      cin >> n;
      count = count +1;
      cout << count << endl;


    }


}




int main2()
{
    float n, i = 2000;
    cin >> n;
    int count =0;

    while (i >= n)
{
        n = n * 2.0;
        count = count +1;
        cout << n << " - "<<count <<endl;
}

}

int main1()
{
    float n, i = 1.0;
    cin >> n;
    int count = 0;

    while (i <= n )
    {
        n = n / 2.0;
        count = count + 1;
        cout << n << " - "<< count << endl;
    }
}




