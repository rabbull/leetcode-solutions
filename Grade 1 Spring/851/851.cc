#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

class Solution
{
  public:
    int dfs(int size, int ans[], vector<int> *map[], vector<int> &quiet, int curr)
    {
        auto list = *(map[curr]);
        if (list.size() == 0)
        {
            ans[curr] = curr;
            return curr;
        }
        int minQuietIndex = curr;
        for (auto next : list)
        {
            if (ans[next] == -1)
            {
                ans[next] = dfs(size, ans, map, quiet, next);
            }
            if (quiet.size() <= ans[next] || quiet.size() <= minQuietIndex)
            {
                cout << "ERROR: " << quiet.size() << " "
                     << ans[next] << " " << minQuietIndex << endl;
            }
            if (quiet.at(ans[next]) < quiet.at(minQuietIndex))
            {
                minQuietIndex = ans[next];
            }
        }
        ans[curr] = minQuietIndex;
        return minQuietIndex;
    }

    vector<int> loudAndRich(vector<vector<int>> &richer, vector<int> &quiet)
    {
        auto ans = new int[quiet.size()];
        auto map = new vector<int> *[quiet.size()];
        for (int i = 0; i < quiet.size(); i++)
        {
            map[i] = new vector<int>();
            ans[i] = -1;
        }

        for (auto e : richer)
        {
            map[e.at(1)]->push_back(e.at(0));
        }

        for (int i = 0; i < quiet.size(); i++)
        {
            dfs(quiet.size(), ans, map, quiet, i);
        }

        auto ret = new vector<int>();
        for (int i = 0; i < quiet.size(); i++)
        {
            ret->push_back(ans[i]);
        }

        delete ans;
        for (int i = 0; i < quiet.size(); i++)
        {
            delete map[i];
        }
        delete map;

        return *ret;
    }
} solution;

int main()
{
    Solution solution;
    int size;
    vector<vector<int>> richer;

    cin >> size;
    while (size--)
    {
        int p, q;
        cin >> p >> q;
        richer.emplace_back();
        richer.back().push_back(p);
        richer.back().push_back(q);
    }

    vector<int> quiet;
    cin >> size;

    while (size--)
    {
        int tmp;
        cin >> tmp;
        quiet.push_back(tmp);
    }

    auto ans = solution.loudAndRich(richer, quiet);

    for (auto e : ans)
    {
        cout << e << " ";
    }
}