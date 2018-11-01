// Перевірити  стан здоров'я  людини
// Программа питає у користувача температуру людини
// А далі в залежності від темпиратури дає висновок
// Варіант перший:
// Якщо температура до 35.0, та вишче 42.0 людина мертва
// Якщо температура між [35.0-42.0] людина жива
// Варіант другий:
// [35.0-36.6) - hipothermia
// [36.6-37.2) - normal
// [37.2-40.0) - fever
// [40.0-42.0) - hyperthermia
#include <iostream>

using namespace std;

int main  ()

{
    float hipotermiamin =35.0,hipotermiamax =36.6;
    float normalmin =36.6, normalmax =37.2;
    float fevermin =37.2,fevermax =40.0;
    float hyperthermiamin =40.0,hyperthermiamax =42.0;
    cout << "Vvedit vashu temperaturu:";
    float temp =0.0;
    cin >> temp;

    if (temp <= hipotermiamax && temp >= hipotermiamin)
    {
        cout << "you suffering from hypothermia";
    }
    else if (temp <= normalmax && temp >= normalmin)

        cout << "you temperature is normal";

    else if (temp <= fevermax && temp >= fevermin)

         cout << "you temperature is fever";

    else if (temp <= hyperthermiamax && temp >= hyperthermiamin)
          cout << "you temperature is hyperthermia";


    else
        cout << "ABNORMAL TEMP. dead";




}


int main1 ()

{   float mintemp =35.0,maxtemp =42.0;

    cout << "What temp is it";
    float temp = 0.0;
    cin >> temp;

    if (temp <= maxtemp  && temp >= mintemp)
        cout << "You are alive";
    else if  ( temp > maxtemp || temp < mintemp)
         cout << "You are dead";




}

