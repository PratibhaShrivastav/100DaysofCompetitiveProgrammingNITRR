class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()){
            return 0;
        }
        unordered_map <char,int> mp;
        for(int i=97;i<123;i++)
            mp[char(i)]=-1;
        mp[s[0]]=0;
        int curr_length=1,max_length=1;
        for(int i=1;i<s.length();i++){
            if(mp[s[i]]==-1){
                curr_length++;
                // mp[s[i]]=i;
            }
            else{
                if(i-curr_length>mp[s[i]]){
                    curr_length++;
                    // mp[s[i]]=i;
                }
                else{
                    curr_length=i-mp[s[i]];
                }
            }
            mp[s[i]]=i;
            if(curr_length>max_length)
                max_length=curr_length;
        }
        return max_length;
    }
};