#include<iostream>
using namespace std;
class emp
{
    char emp_name[20];
    int age;
    int empid;
    char sex[10];
    char address[30];
    int h_no;
    char Street[25];
    char Dist[15];
    char State[15];
public:
    void read_data() {
        cout << "\nenter the name of the employee:";
        cin >> emp_name;
        cout << "\nenter the employee age";
        cin >> age;
        cout << "\nenter the employee id";
        cin >> empid;
        cout << "\nenter the sex";
        cin >> sex;
        cout << "\nenter the address";
        cin >> address;
        cout << "\nenter the house no.";
        cin >> h_no;
        cout << "\nenter the street";
        cin >> Street;
        cout << "\nenter the dist";
        cin >> Dist;
        cout << "\nenter the state";
        cin >> State;
    }
    void disp_data() {
        cout << endl << emp_name <<"        "<< empid << "      " << h_no<<"    " << Street<<"          " ;
        cout<< Dist<<"        " << State << "    " << endl;
    }

}s[10];
int main()
{
    int i=0;
    int x;
    cout << "\nenter the no. of employee:";
    cin >> x;
    while (i < x) {
        s[i].read_data();
        i++;
    }
    i = 0;
    cout << "\n Name        EMP_ID      H.NO    STREET      Dist        State";
    while (i < x) {
        s[i].disp_data();
        cout << endl<<endl;
        i++;
    }
    return 0;
}