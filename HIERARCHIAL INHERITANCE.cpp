#include<iostream>
using namespace std;
class father{
protected:
    string ychromosome="y";
    string xchromosome="x";
public:
    father(){}
};
class mother{
protected:
    string chromosome="x";
public:
    mother(){}
};
class son: public father,public mother{
public:
    string chromosome= mother::chromosome+father::ychromosome;
    son(){}
};
class daughter: public father,public mother{
public:
    string chromosome= father::xchromosome+ mother::chromosome;
    daughter(){}
    };
int main(){
son MALE;
daughter FEMALE;
cout<< "male chromosome "<<MALE.chromosome<<endl;
cout<<"female chromosome "<<FEMALE.chromosome<<endl;
return 0;
}
