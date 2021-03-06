class Solution {
public:
    int convertTime(string current, string correct) {
        int need_min = (stoi(correct.substr(0,2)) - stoi(current.substr(0,2))) * 60 + (stoi(correct.substr(3)) - stoi(current.substr(3)));
        int ct = 0;
        ct += need_min/60;
        need_min -= (60 * (need_min/60));
        
        ct += need_min/15;
        need_min -= (15 * (need_min/15));
        
        ct += need_min/5;
        need_min -= (5 * (need_min/5));
        
        ct += need_min/1;
        need_min -= (1 * (need_min/1));
        
        return ct;
    }
};