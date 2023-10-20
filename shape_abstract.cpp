#include <iostream>
using namespace std;
class Shape {
public:
    virtual void area() = 0; 

    void display()
    {
        cout<<" shape  "<<endl;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
 void area(){
    cout<<"enter the length and width";
    cin>>length>>width;
    int Area=length*width;
    cout<<"the area is:: "<<Area;
 }
  
};
class circle:public Shape{
    private: double radius;
    public: void area(){
        cout<<"enter the radius::"<<endl;
        cin>>radius;
        double Area=3.14*radius*radius;
        cout<<"the area of circle::"<<Area<<endl;
    }
};
class square:public Shape{
    private:int side;
    public: void area()
    {
        cout<<"enter the side::"<<endl;
        cin>>side;
        int Area=side*side;
        cout<<" the area of the square::"<<Area<<endl;
    }
};



int main() {
    
    
     Rectangle r1;
     r1.area();
     r1.display();
circle c1;
c1.area();

square s1;
s1.area();

  

    return 0;
}