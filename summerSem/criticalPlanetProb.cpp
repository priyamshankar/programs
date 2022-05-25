// #include <iostream>
// #include <vector>
// #include <map>
// #include <set>
// #include <algorithm>

// using namespace std;
// int desc[10000];
// int visited[10000];
// set<int> crit;
// map<int, set<int>> g;
// int edges, vertices;
// int currentTime = 0;
// void tarjan(int u, int v)
// {
//     desc[v] = visited[v] = currentTime;
//     ++currentTime;
//     for (auto adj : g[v])
//     {
//         if (visited[adj] == -1)
//         {
//             tarjan(v, adj);
//             if (desc[adj] < desc[v])
//                 desc[v] = desc[adj];
//             if (desc[adj] == visited[adj])
//             {
//                 crit.insert(v);
//                 crit.insert(adj);
//             }
//         }

//         else if (adj != u)
//         {
//             if (visited[adj] < desc[v])
//                 desc[v] = visited[adj];
//         }
//     }
// }

// int main()
// {
//     cin >> edges;
//     cin >> vertices;
//     for (int i = 0; i < vertices; i++)
//         desc[i] = visited[i] = -1;
//     for (int i = 0; i < edges; i++)
//     {
//         int from, to;
//         cin >> from;
//         cin >> to;
//         auto it = g.find(from);
//         if (it != g.end())
//             it->second.insert(to);
//         else
//         {
//             set<int> s;
//             s.insert(to);
//             g.insert(make_pair(from, s));
//         }

//         auto it2 = g.find(to);
//         if (it2 != g.end())
//             it2->second.insert(from);
//         else
//         {
//             set<int> s;
//             s.insert(from);
//             g.insert(make_pair(to, s));
//         }
//     }

//     for (int v = 0; v < vertices; v++)
//     {
//         if (visited[v] == -1)
//         {
//             tarjan(v, v);
//         }
//     }

//     vector<int> answer;
//     for (auto x : crit)
//         answer.push_back(x);
//     sort(begin(answer), end(answer));
//     if (answer.size() == 0)
//         cout << "-1" << endl;
//     else
//     {
//         for (auto x : answer)
//             cout << x << endl;
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    int n, x1, y1;
    cin >> n;
    char x[3][n];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> x[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (x[0][i] == '#' && x[1][i] == '#' && x[2][i] == '#')
        {
            cout << '#';
        }
        else if (x[0][i] == '.' && x[1][i] == '.' && x[2][i] == '.')
        {
        }
        else
        {
            char a, b, c, a1, b1, c1, a2, b2, c2;
            x1 = i;
            a = x[0][x1];
            b = x[0][x1 + 1];
            c = x[0][x1 + 2];
            a1 = x[1][x1];
            b1 = x[1][x1 + 1];
            c1 = x[1][x1 + 2];
            a2 = x[2][x1];
            b2 = x[2][x1 + 1];
            c2 = x[2][x1 + 2];
            if (a == '.' && b == '*' && c == '.' && a1 == '*' && b1 == '*' && c1 == '*' && a2 == '*' && b2 == '.' && c2 == '*')
            {
                cout << "A";
                i = i + 2;
            }
            if (a == '*' && b == '*' && c == '*' && a1 == '*' && b1 == '*' && c1 == '*' && a2 == '*' && b2 == '*' && c2 == '*')
            {
                cout << "E";
                i = i + 2;
            }
            if (a == '*' && b == '*' && c == '*' && a1 == '.' && b1 == '*' && c1 == '.' && a2 == '*' && b2 == '*' && c2 == '*')
            {
                cout << "I";
                i = i + 2;
            }
            if (a == '*' && b == '*' && c == '*' && a1 == '*' && b1 == '.' && c1 == '*' && a2 == '*' && b2 == '*' && c2 == '*')
            {
                cout << "O";
                i = i + 2;
            }
            if (a == '*' && b == '.' && c == '*' && a1 == '*' && b1 == '.' && c1 == '*' && a2 == '*' && b2 == '*' && c2 == '*')
            {
                cout << "U";
                i = i + 2;
            }
        }
    }
}