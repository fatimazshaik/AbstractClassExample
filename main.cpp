//Problem: we want to create shapes in OOP context and have each shape has its own draw function
#include <iostream>
using namespace std;
// An abstract class - it has at least one pure virtual function.
//      - used when don’t know the implementation of the function
class Shape{
public:
    // Pure Virtual Function: function that has no definition
    virtual void draw() = 0;
    // override that function in the derived class otherwise it will become another abstract class
};
//
class Square: public Shape{
    int length = 3;
public:
    void draw() {
       cout<<"* * *"<<endl;
       cout<<"* * *"<<endl;
       cout<<"* * *"<<endl;
    }
};
class Rectangle: public Shape{
    int width = 3;
    int length = 4;
public:
    void draw() {
        cout<<"* * *"<<endl;
        cout<<"* * *"<<endl;
        cout<<"* * *"<<endl;
        cout<<"* * *"<<endl;
    }
};

int main(void)
{
    Square sq;
    sq.draw();
    cout<<""<<endl;

    //have pointers and references of abstract class type.
    Shape *rect = new Rectangle();
    rect->draw();
    return 0;
}