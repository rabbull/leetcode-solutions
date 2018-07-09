#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    string findReplaceString(string S, vector<int> &indexes, vector<string> &sources, vector<string> &targets)
    {
        int T = indexes.size();
        for (int i = 0; i < T; i++)
        {
            bool flag = true;
            for (int p = 0; p < sources.at(i).size(); p++)
            {
                if (S.at(indexes.at(i) + p) != sources.at(i).at(p))
                {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                S.replace(S.begin() + indexes.at(i), S.begin() + indexes.at(i) + sources.at(i).size(), targets.at(i));
            }
        }
        return S;
    }
} solution;

int main()
{
    vector<int> indexes;
    indexes.push_back(0);
    indexes.push_back(2);

    vector<string> sources;
    sources.emplace_back("a");
    sources.emplace_back("cd");

    vector<string> targets;
    targets.emplace_back("eee");
    targets.emplace_back("ffff");

    cout << solution.findReplaceString("abcd", indexes, sources, targets) << endl;

    return 0;
}
