#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'gameWinner' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING colors as parameter.
 */

string gameWinner(string colors)
{
    // cout<<"wendy";
    bool wendyChance = true;
    int wcount = 0;
    int bcount = 0;
    int size = colors.size();
    while (size != 0)
    {
        for (int i = 0; i < size; i++)
        {
            if (wendyChance)
            {
                if (colors[i] == 'w')
                {
                    wcount++;
                }
                else
                {
                    wcount = 0;
                }
                if (wcount == 3)
                {
                    // remove the string
                    colors.erase(colors.begin() + i);
                    wendyChance = !wendyChance;
                    wcount = 0;
                    //   return "wendy";
                    break;
                }
            }
            if (size - i <= 1)
            {

                if (wcount < 3 )
                {
                    return "bob";
                }
            }
            //
            //
            else
            {
                if (colors[i] == 'b')
                {
                    bcount++;
                }
                else
                {
                    bcount = 0;
                }
                if (bcount == 3)
                {
                    // remove the current string
                    colors.erase(colors.begin() + i);
                    wendyChance = !wendyChance;
                    bcount = 0;
                    //   return "bob";
                    break;
                }
            }
            if (size - i <= 1)
            {
                if (bcount < 3)
                {
                    return "wendy";
                }
            }
        }
        //   if(wcount<3 && wcount>0){
        //               return "bob";
        //           }
        //               if(bcount<3 && bcount>0){
        //               return "wendy";
        //           }
    return " out";
    }
    return " ";

}

int main()
{
    //   ofstream fout(getenv("OUTPUT_PATH"));

    //   string colors;
    //   getline(cin, colors);

    //   string result = gameWinner(colors);

    //   fout << result << "\n";

    //   fout.close();

    string str;
    cin >> str;
    cout << gameWinner(str);

    return 0;
}
