class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        // Farenheit =  (Celsius (°C) * 9/5) + 32
        // Kelvin = Celsius + 273.3
        double farenheit = (celsius * 9/5) + 32;
        double kelvin = celsius + 273.15;
        return {kelvin, farenheit};
    }
};