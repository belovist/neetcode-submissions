class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!= t.length()){
            return false;
        }
        std::unordered_map<char,int> cnt;

        for(int c : s){
            cnt[c]++;
        }
        for(int c : t){
            if(cnt.find(c) == cnt.end() || cnt[c] == 0){
                return false;
            }
            cnt[c]--;
        }
        return true;
    }
};
