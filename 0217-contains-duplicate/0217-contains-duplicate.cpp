class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int , int > u_map ;
        for (int i = 0 ; i < nums.size() ; i++)
        {
            u_map[nums[i]] ++ ;
            
        }
        for (auto x : u_map)
        {
            cout << x.first;
            cout << x.second <<endl;
            if (x.second > 1)
                return true ;
        }
        
        return false;
    }
};