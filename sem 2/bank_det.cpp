#include<iostream>
using namespace std;
class bankacnt
{
    char name[30];
    int account_no;
    char account_type[10];
    int balance = 0;
    int n;
    int dep;
    int m;
public:
    void input_det() {
        cout << "\nenter your name:";
        cin >> name;
        cout << "\nenter the account no:";
        cin >> account_no;
        cout << "\nenter the account type";
        cin >> account_type;
    }
    void disp_info() {
        cout << "\nname is " << name << endl;
        cout << "account no. is" << account_no << endl;
        cout << "account type is" << account_type << endl;
    }
    void act_blc() {
        cout << "you account balance is " << balance << endl;
        cout << "want to deposit? press 1 else 0" << endl;

 

        cin >> n;
        switch (n) {
        case 1:
            dep = 0;
            cout << "enter the amount";
            cin >> dep;
            balance += dep;
            cout << balance;
            break;
        default:
            cout << "deposit is denied by the user";
            break;
        }
    }
    void actwd() {
        cout << "you account balance is " << balance << endl;
        cout << "want to withdraw? press 1 else 0" << endl;

 

        cin >> n;
        switch (n) {
        case 1:
            m = 0;
            cout << "enter the amount";
            cin >> m;
            balance -= m;
            cout << "current balance is:" << balance;
            break;
        default:
            cout << "withdraw is denied by the user";
            break;
        }
    }
};

 


int main() {

 

    int i = 1;
    int x;
    cout << "enter the total no. of employee:";
    cin >> x;
    bankacnt s[10];
    while (i < x + 1) {

 

        s[i].input_det();
        s[i].disp_info();
        s[i].act_blc();
        s[i].actwd();
        i++;
    }
    i = 0;
    while (i < x + 1) {
        s[i].disp_info();
        cout << endl << endl;
        i++;
    }

 


    return 0;
}