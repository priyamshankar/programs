#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> perm, int index, vector<vector<int>> &ans)
{
    if (index >= perm.size())
    {
        ans.push_back(perm);
        return;
    }
    for (int j = index; j < perm.size(); j++)
    {
        swap(perm[index], perm[j]);
        solve(perm, index + 1, ans);

        // for backtracking
        solve(perm, index + 1, ans);
    }
}

vector<vector<int>> permutation(vector<int> &perm)
{
    int index = 0;
    vector<vector<int>> ans;
    solve(perm, index, ans);
    return ans;
}
int main()
{
    vector<int> perm = {1, 2, 3};
    vector<vector<int>> v = permutation(perm);
    for (int i = 0; i < v.size(); i++)
    { // printing the 2D vector.
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }

    return 0;
}