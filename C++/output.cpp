#include <iostream>
#include<bits/stdc++.h>
#include <fstream>
using namespace std;
int main()
{
    string st1 = "MY NAME IS ASRAR UL HAQ";
    ofstream out("a.txt");
    out << st1;
    string std2;
    ifstream in("a.txt");
    getline(in,std2);
    cout<<std2;
    return 0;
}
