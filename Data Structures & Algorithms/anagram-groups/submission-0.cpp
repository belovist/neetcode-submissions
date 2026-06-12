class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> map;

        for(string ch : strs){
            string key = ch;

            sort(key.begin(),key.end());

            map[key].push_back(ch);
        }
        vector<vector<string>> result;

        for (auto it = map.begin(); it != map.end(); ++it) {
            result.push_back(it->second); 
        }

        return result;
    }
};
