#include <iostream>

using namespace std;

class Rectangle{
    float height,length;
public:
    Rectangle(){
        height = 4;
        length = 4;
    }
    float perimeter(){
        return (height + length) * 2;
    }
};


int main(){
    Rectangle r;
    float p = r.perimeter();
    cout<<"perimeter"<<p;
    return 0;
}
