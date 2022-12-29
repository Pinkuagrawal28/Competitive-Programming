class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> v1;
        double kev=celsius+273.15;
        double fah=celsius*1.80+32.00;
        v1.push_back(kev);
        v1.push_back(fah);
        return v1;
    }
};