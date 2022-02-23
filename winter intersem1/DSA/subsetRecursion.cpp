#include <iostream>
#include <vector>
using namespace std;
void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }
    solve(nums, output, index + 1, ans);

    output.push_back(nums[index]);
    solve(nums, output, index + 1, ans);
}

vector<vector<int>> subset(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums, output, index, ans);
    return ans;
}
int main()
{
    vector<int> nums = {4, 3, 6};
    vector<vector<int>> v = subset(nums);
    for (int i = 0; i < v.size(); i++)
    { // printing the 2D vector.
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
    // cout<<nums;
    return 0;
}