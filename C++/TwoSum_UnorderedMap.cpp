class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> target_index;
        unordered_map<int,int> index_store;

        for (int i=0; i < nums.size(); i++){
            int required_int = target - nums[i];

            if (index_store.find(required_int) != index_store.end()){
                target_index.push_back(i);
                target_index.push_back(index_store[required_int]);
                return target_index;
            }
            index_store[nums[i]] = i;
            
        }
        return target_index;
    }    
};
