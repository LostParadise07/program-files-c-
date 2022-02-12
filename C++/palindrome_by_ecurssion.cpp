#include <iostream>
using namespace std;

bool palindrome(string &st, int i)
{
  int l=st.length()-1;
      if(i>l-i)
      return true;

      if(st[i]!=st[l-i])
      return false;
   else{
     return palindrome(st,i+1);
   }

}

int main()
{

  string name="abbbya";
  if(palindrome(name,0))
  {
    cout<<" palindrome" ;
  }
  else{
    cout<< "not palindrome";
  }
  return 0;
}
