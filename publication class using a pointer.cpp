#include <iostream>
#include<string>
using namespace std;
class Publication
{
protected:
    string title;
    int price;
public:

    void get_item()
    {
        cout<<"\nEnter the Title of Publication: ";
        cin>>title;
        cout<<"\nEnter the price: ";
        cin>>price;
    }
    void put_item()
    {
        cout<<"\nThe title of the publication is "<<title<<endl;
        cout<<"The price is "<<price<<endl;
    }
    virtual void get_data()
    {

    }
};
class Book:public Publication
{
private:
    int total_pages;
public:
    void get_data()
    {
        Publication::get_item();
        cout<<"\nEnter number of pages: ";
        cin>>total_pages;
    }
    void put_data()
    {
        Publication::put_item();
        cout<<"The number of pages is "<<total_pages<<endl;
    }
};
class music:public Publication
{
private:
    float music_time;
public:
    void get_data()
    {
        Publication::get_item();
        cout<<"\nEnter music time of album in minutes: ";
        cin>>music_time;
    }
    void  put_data()
    {
        Publication::put_item();
        cout<<"The music time in minutes is "<<music_time<<endl;
    }
};
int main()
{
    Publication *pub[100];
    int n=0;
    char choice;
  do
  {
      cout<<"Book or music?(b/m): "<<endl;
      cin>>choice;
      if(choice=='b')
      {
          pub[n]=new Book;
          pub[n]->get_data();
      }
      else
      {
          pub[n]=new music;
          pub[n]->get_data();
      }
      n++;
      cout<< "\n enter another ? (y/n)"<<endl;
      cin>>choice;
      }
      while(choice=='y');
      for(int i=0;i<n;i++)
      pub[i]->put_item();
      cout<<endl;
    return 0;
}

