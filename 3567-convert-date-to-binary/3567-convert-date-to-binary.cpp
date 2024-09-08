class Solution {
public:
    string convertBinary(int number){
        string n = "";
        while(number>0){
            n += to_string(number%2);
            number = number/2;
        }
        reverse(n.begin(), n.end()); 
        return n;
    }
    string convertDateToBinary(string date) {
        string year = date.substr(0, 4);
        string month = date.substr(5, 7);
        string day = date.substr(8, 10);
        cout<<convertBinary(stoi(year));
        return convertBinary(stoi(year))+"-"+convertBinary(stoi(month))+"-"+convertBinary(stoi(day));
    }
};