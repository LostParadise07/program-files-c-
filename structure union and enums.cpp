#include<iostream>
using namespace std;

//STRUCTURE
struct employee
{
    int id;
    char favourite_character;
    float salary;
};

//UNION
union money
{
    int land;
    char car;
    float dollar;
};

int main(){

    //ENUM
    enum{breakfast,lunch,dinner};
    cout<<"for breakfast "<<breakfast<<endl;
    cout<<"for lunch "<<lunch<<endl;
    cout<<"for dinner "<<dinner<<endl;
    union money m1;
    m1.dollar=23453;
    cout<<"THE MONEY DONATED BY ASRAR IS "<<m1.dollar<<endl;
struct employee asrar;
asrar.id=7;
asrar.favourite_character='A';
asrar.salary=2000099876.98;
cout<<"ASRAR'S ID IS "<<asrar.id<<endl;
cout<<"HIS FAVOURITE CHARACTER IS "<<asrar.favourite_character<<endl;
cout<<"HIS SALARY IS "<<asrar.salary<<endl;
return 0;
}
