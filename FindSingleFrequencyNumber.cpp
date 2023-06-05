#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums)
{ 
    //sorting the vector
    sort(nums.begin(), nums.end());
    int ans = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        //checking if 1st element in vector is not equal to another one
        if (nums[i] != nums[i + 1])
            ans = nums[i];
    }
    return ans;
}

int main()
{
    vector<int> nums = {0, 1, 7, 0, 1, 0, 1, 6, 6, 6};

    cout << singleNumber(nums);

    return 0;
}