#include<iostream>
using namespace std;
template <class T>
class ASRAR
{
public:
  T data;
  ASRAR(T a)
  {
      data=a;
  }
  void display();
};
template<class T>
void ASRAR<T>::display()
{
   cout<< data;
}
int main(){
ASRAR<int> a(5.7);
cout<<a.data<<endl;
a.display();
return 0;
}
