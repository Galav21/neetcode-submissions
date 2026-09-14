class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> charMap;
        int maxlen = 0;
        int l = 0;
        
        for(int r = 0; r < s.size(); r++){
            char currChar = s[r];

            if(charMap.find(currChar) != charMap.end() && charMap[currChar] >= l){
                l = charMap[currChar] + 1;
            }
            charMap[currChar] = r;
            maxlen = max(maxlen, r-l+1);
        }
        return maxlen;
    }
};
