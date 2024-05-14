class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> target_index;
        for (int i=0; i < nums.size(); i++) {
            for(int j=i+1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target) {
                    target_index.push_back(i);
                    target_index.push_back(j);
                    break;
                }
            }
       } 
       return target_index;
    }    
};
