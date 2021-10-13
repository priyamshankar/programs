#include <iostream>
using namespace std;

int main()
{
    char enc[] = { '*',
                       'a',
                       'b',
                       'c',
                       'd',
                       'e',
                       'f',
                       'g',
                       'h',
                       'i',
                       'j',
                       'k',
                       'l',
                       'm',
                       'n',
                       'o',
                       'p',
                       'q',
                       'r',
                       's',
                       't',
                       'u',
                       'v',
                       'w',
                       'x',
                       'y',
                       'z',};

    cout << "select the option from the menu below" << endl;
    cout << "1.encode a password" << endl;
    cout << "2.decode a password" << endl;
    int opt;
    cin >> opt;
    if (opt==1)
    {
        //case 1:

        

        int n;               
        // cin >> n;
        cout << "Enter the password to be encrypted\n";
        string password;
        cin >> password;
        n=password.size();
        // cout<<n;
        int mat2[n];
        int i, j, k;
        k = -1;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < 26; j++)
            {
                k++;
                if (password[i] == enc[j]) //to assign the no.s to new mat2;
                {
                    //cout<<enc[j];
                    mat2[i] = k;
                    k = -1;
                    break;
                    //cout <<enc[j]<<endl;
                }
            }
            //cout<<mat2[i]<<endl;
            //cout<<password[i];
        }
        for (i = 0; i < n; i++)
        {
            mat2[i] = 27 * mat2[i];
            cout << mat2[i] << endl;
        }
        //default:
    }
    if (opt==2){
        cout<<"enter the no. of digits you want to decode"<<endl;
        int s;
        cin>>s;
        int decmat[s];
        int t,j;
        int y;
        for (t=0;
        t<s;t++)
        {
            cin>>decmat[t];
            decmat[t]=decmat[t]/27;
        }
        for (j=0;j<s;j++){
            y=decmat[j];
            cout << enc[y];
        }
    }
    return 0;
}