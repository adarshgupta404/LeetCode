class TimeMap {
    unordered_map<string, vector<pair<int, string>>> mp;
public:
    TimeMap() {}
    
    void set(string key, string value, int time) {
        // mp[key].insert({-1*time,value});
        mp[key].push_back({time,value});
    }
    
    string get(string key, int time) {
        // if(mp.find(key)==mp.end()) return "";
        // auto it=mp[key].lower_bound(-1*time);
        // if(it==mp[key].end()) return "";
        // return it->second;
        if(mp.find(key)==mp.end())
            return "";
        int l = 0, h = mp[key].size()-1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(mp[key][mid].first < time)
                l = mid + 1;
            else if(mp[key][mid].first > time)
                h = mid - 1;
            else
                return mp[key][mid].second;
        }
        if(h>=0)
            return mp[key][h].second;
        return "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */