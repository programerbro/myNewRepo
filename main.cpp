#include <iostream>
#include <list>

using namespace std;

class Bankaccount {
    public:
    string Ownername;
    string Numaccount;
    int total;
    list<string> timesdeposite;

};

int main()
{
Bankaccount Owaccount;
Owaccount.Ownername = "rudy";
Owaccount.Numaccount = "1";
Owaccount.total = 2000;
Owaccount.timesdeposite = {"09/01, 10/02,11/04" };

cout << "Name:" << Owaccount.Ownername <<endl;
cout << " number of accounts :" << Owaccount.Numaccount << endl;
cout << " total amount of money :$" << Owaccount.total << endl;
cout << " dates deposited :" << Owaccount.timesdeposite << endl;

    return 0;
}
