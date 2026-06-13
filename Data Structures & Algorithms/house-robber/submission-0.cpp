class Solution {
public:
    vector <int> money;
    int break_into(vector<int> nums,int i){
        if(i>=nums.size()){
            return 0;
        }
        else if (money[i]!=-1){
            return money[i];
        }
        else{
            money[i]= nums[i]+ max(break_into(nums,i+2),break_into(nums,i+3));
            return money[i];
        }
    }
    int rob(vector<int>& nums) {
        money.resize(nums.size(),-1);
        return max(break_into(nums,0),break_into(nums,1));

    }
};
