class TimeMap {
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) 
    {
        store[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) 
    {
        if (store.find(key) == store.end())
            return "";
        
        map<int, string>& snaps = store[key];
        auto itr = snaps.upper_bound(timestamp);

        return itr == snaps.begin() ? "" : (--itr)->second;
    }
    
private:
    unordered_map<string, map<int, string>> store;
};