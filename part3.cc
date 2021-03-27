#include <iostream>
using namespace std;

class Converter{
    
    public:
    static Converter* getInstance() {
       
       return instance;
            
    };
    
        ~Converter();
        
         float fromFtoC( float);
    
    private:
        Converter();
        static Converter* instance;
    

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
    
    //using the Converter singleton pattern. it getInstance and call the method fromFtoc.
    float celsiusTemperature = Converter::getInstance()->fromFtoC(temperature);
    
    
    
    cout << "Converted to Celsius, this temperature is " << celsiusTemperature << "!\n";
}