#include<iostream>
#include<vector>
#include<stack>
using namespace std;

  void moveZeroes(vector<int>& nums) 
  {
    vector <int> nums_temp;
    stack <int> s1;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i])
        nums_temp.push_back(nums[i]);
        else
        s1.push(nums[i]);
    }
     while(!s1.empty())
     {
         nums_temp.push_back(s1.top());
         s1.pop();
     }
    nums.clear();
    nums=nums_temp;
  }

    int main()
{
    vector <int> nums{0};
    moveZeroes(nums);
    for(int i : nums)
        cout<<" "<<i;

}
