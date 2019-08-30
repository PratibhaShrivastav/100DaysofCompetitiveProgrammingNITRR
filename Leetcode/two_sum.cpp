
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> res;
        vector <pair<int, int>> vp;
        for(int i=0;i<nums.size();i++){
            vp.push_back({nums[i],i});
        }
        sort(vp.begin(),vp.end());
        int start = 0;
        int end = vp.size()-1;
        while(start<end){
            if(vp[start].first+vp[end].first==target){
                res.push_back(vp[start].second);
                res.push_back(vp[end].second);
                return res;
            }
            else if(vp[start].first+vp[end].first<target)
                start++;
            else
                end--;
        }
    return res;
    }
};