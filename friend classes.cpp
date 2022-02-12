#include <iostream>
using namespace std;
class parent_2;
class parent_1 {
private:
    int data;
public:
    parent_1(int a) {
        data = a;
    }
    void smaller(parent_2&);
    bool is_even() {
        return (data%2)?false:true;
    }
    bool is_even(parent_2&);
    bool is_odd() {
        return (data%2)?true:false;
    }
    bool is_odd(parent_2&);
    int get_data() {
        return data;
    }
};
class parent_2 {
private:
    int data;
public:
    // using friend functions
    friend void parent_1::smaller(parent_2&);
    friend bool parent_1::is_even(parent_2&);
    friend bool parent_1::is_odd(parent_2&);
    parent_2(int a) {
        data = a;
    }
    int get_data() {
        return data;
    }
};

void parent_1::smaller(parent_2& o) {
    if (data < o.data)
        cout<<"parent_1 is smaller!"<<endl;
    else
        cout<<"parent_2 is smaller!"<<endl;
}
bool parent_1::is_even(parent_2& o) {
    return (o.data%2)?false:true;
}

bool parent_1::is_odd(parent_2& o) {
    return (o.data%2)?true:false;
}
// Entering main function
int main() {
    int a, b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    parent_1 o1(a);
    parent_2 o2(b);

    cout<<"The number are : "<<o1.get_data()<<" "<<o2.get_data()<<endl;
    o1.smaller(o2);

    cout<<"parent_1: "<<endl;
    cout<<"    is even: "<<o1.is_even()<<endl;
    cout<<"    is odd: "<<o1.is_odd()<<endl;

    cout<<"parent_2:"<<endl;
    cout<<"    is even: "<<o1.is_even(o2)<<endl;
    cout<<"    is odd: "<<o1.is_odd(o2)<<endl;


    return 0;
}
