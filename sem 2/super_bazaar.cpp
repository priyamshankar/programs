#include <iostream>
using namespace std;
class bankacnt
{
   
   
   
    int balance = 0;
    int n;
    int dep;
    

public:
    void disp_info()
    {
        cout << "welcome to the  super bazaar hope you like shopping here" << endl
             << "sno."
             << "         "
             << "name"
             << "            "
             << "price" << endl
             << "1"
             << "          "
             << "console"
             << "           "
             << "4500" << endl
             << "2"
             << "          "
             << "ps5"
             << "               "
             << "50000" << endl;
    }
    void act_blc()
    {
        cout << "to purchase the item enter the s.no otherwise put 0"<<endl;

        cin >> n;
        switch (n)
        {
        case 1:
            balance = balance + 4500;
            cout << "total amount=" << balance;
            break;
        case 2:
            balance = balance + 50000;
            cout << "total amount=" << balance;
            break;
        default:
            cout << "thankyou for the shopping";
            break;
        }
    }
}s;

int main()
{
    int f;

    s.disp_info();
    do{
    s.act_blc();
    cout<<"want to shop more? press 1:"<<endl;
    
    cin>>f;
    }while(f<2);
    
    

    return 0;
}