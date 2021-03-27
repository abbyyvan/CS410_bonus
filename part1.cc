#include <iostream>
using namespace std;


int main()
{
    float temperature;
    cout << "Please enter temperature in Fahrenheit:  ";
    cin >> temperature;//internal casting
    
    // Part 1: convert temperature to Celsius
   
    float celsiusTemperature = (temperature - 32) / 1.8;
    
    cout << "Converted to Celsius, this temperature is " << celsiusTemperature << "!\n";
}