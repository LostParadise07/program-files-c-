#include <iostream>
using namespace std;
class Publication
{
protected:
    string title;
    int price;
public:

    void get_data()
    {
        cout<<"\nEnter the Title of Publication: ";
        cin>>title;
        cout<<"\nEnter the price: ";
        cin>>price;
    }
    void put_data()
    {
        cout<<"\nThe title of the publication is "<<title<<endl;
        cout<<"The price is "<<price<<endl;
    }
};
class Book:public Publication
{
private:
    int total_pages;
public:
    void get_data()
    {
        cout<<"\nEnter number of pages: ";
        cin>>total_pages;
    }
    void put_data()
    {
        cout<<"The number of pages is "<<total_pages<<endl;
    }
};
class music:public Publication
{
private:
    int music_time;
public:
    void get_data()
    {
        cout<<"\nEnter music time of album in minutes: ";
        cin>>music_time;
    }
    void  put_data()
    {
        cout<<"The music time in minutes is "<<music_time<<endl;
    }
};
int main()
{
    Publication pub;
    Book b;
    music m;
    pub.get_data();
    b.get_data();
    m.get_data();
    pub.put_data();
    b.put_data();
    m.put_data();


    return 0;
}
