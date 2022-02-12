#include<iostream>
#include<fstream>
using namespace std;
int main()
{

    string st1="MY NAME IS ASRAR UL HAQ";
    ofstream out("a.txt");
   out<<st1;

    string st2;
    ifstream in("a.txt");
    // in>>st2;
    getline(in,st2);
    cout<<st2;
    return 0;
}
