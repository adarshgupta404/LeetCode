class TimeMap {
public:
    map<string,map<int,string>>mp;
    TimeMap() {
        mp=map<string,map<int,string>>();
    }
    
    void set(string key, string value, int time) {
        mp[key].insert({-1*time,value});
    }
    
    string get(string key, int time) {
        if(mp.find(key)==mp.end()) return "";

        auto it=mp[key].lower_bound(-1*time);

        if(it==mp[key].end()) return "";

        return it->second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */