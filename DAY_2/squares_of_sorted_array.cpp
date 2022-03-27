#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {    
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=nums[i]*nums[i];    
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
    void print(vector<int>& nums)
    {
        for(int i:nums)
        cout<<" "<<i;
        cout<<endl;

    }
};

int main()
{   vector<int> nums{-4,-1,0,3,10};
    Solution obj;
	obj.sortedSquares(nums);
    obj.print(nums);
}
