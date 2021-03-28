#include <iostream>

using namespace std;

class Calculator{
    float n1;
    float n2;

public:
    Calculator(float n1,float n2){
    this->n1 = n1;
    this->n2 = n2;
    }

    float add(){
        return n1 + n2;
    }

    float substract(){
        return n1 - n2;
    }

    float mutiply(){
        return n1 * n2;
    }

    float divide(){
        return n1/n2;
    }

};

int main(){
    float n1,n2;
    cout<<"enter first number: ";
    cin>>n1;
    cout<<"enter second number: ";
    cin>>n2;

    Calculator c(n1,n2);
    float sum = c.add();
    float residue = c.substract();
    float product = c.mutiply();
    float divident = c.divide();

    cout<<" sum is "<<sum;
    cout<<"/ product is "<<product;
    cout<<"/ divident is "<<divident;
    cout<<"/ residue is "<<residue;
    return 0;
}
