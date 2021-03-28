#include <iostream>

using namespace std;

class Student{
    string name;
    float mark1,mark2;
public:
    Student(){
        name = "";
        mark1 = 0;
        mark2 = 0;
    }
    Student(string name,float mark1,float mark2){
        this->name = name;
        this->mark1 = mark1;
        this->mark2 = mark2;
    }
    float Get_Marks(int markNumber){
        if( markNumber == 1){
            return mark1;
        }
        return mark2;
    }

    float calc_sum(){
        return mark1 + mark2;
    }

};


int main(){
    string name;
    float mark1,mark2;
    cout << "enter name: ";
    cin>>name;
    cout<<"enter first mark: ";
    cin>>mark1;
    cout<<"enter second mark: ";
    cin>>mark2;
    Student s(name,mark1,mark2);
    float m1 = s.Get_Marks(1);
    float m2 = s.Get_Marks(5);
    float sum = s.calc_sum();
    cout<< "mark one: "<<m1<<" mark two: "<<m2<<" total: "<< sum;
    return 0;
}
