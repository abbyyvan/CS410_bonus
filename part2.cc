#include <iostream>
using namespace std;

class Converter{
    
    public:
        float fromFtoC( float);
        
        
    
    };
 
//Part2 Converter class and method fromFtoC(float t)   
//implementation usually in a .cpp file
float Converter::fromFtoC( float temperatureInF) {
    
    return (temperatureInF - 32) / 1.8;
}

int main()
{
    float temperature;
    cout << "Please enter temperature in Fahrenheit:  ";
    cin >> temperature;//internal casting
    
    //create the converter instance
    Converter *converter = new Converter();
    float celsiusTemperature = converter->fromFtoC( temperature );
    
    
    cout << "Converted to Celsius, this temperature is " << celsiusTemperature << "!\n";
}