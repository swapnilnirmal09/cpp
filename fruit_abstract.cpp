/*:Create abstract class Fruit with abstract function taste
Create derived classes for Fruit:Apple,Mango,Orange
Implement abstract method in derived class ,add specific methods like juice(),jam(),pulp() in respective derived class(as discussed in lect);

create taster program.create fruit basket and invoke method
Use:dynamic_cast,typeid*/
#include<iostream>
#include<typeinfo>
using namespace std;
class fruit{
    public:  virtual void taste(){
        cout<<" no tatse  "<<endl;
    }
};
class apple:public fruit{
public: void jam()
{
    cout<<"  create jam  "<<endl;
}
    void taste(){
        cout<<"  the taste of the apple is sweet  "<<endl;
    }

};
class mango: public fruit{
    public: void pulp()
    {
         cout<<"   create pulp  "<<endl;
    }
    

        void taste(){
        cout<<"  the taste of mango is sweet  "<<endl;
        }
    
};
class orange: public fruit{
    public: void juice(){
        cout<<"  create juice  "<<endl;
    }
    
        void taste(){
        cout<<"  the taste of orange is sweet  "<<endl;
        }
    };

int main()
{
 fruit f;
 f.taste();
 
 apple a;
 a.taste();
 a.jam();

 mango m;
 m.taste();
 m.pulp();

 orange o;
 o.taste();
 o.juice();

 fruit *ptr=&o;
 ptr->taste();

 fruit *basket[4];
 basket[0]=&f;
 basket[1]=&a;
 basket[2]=&m;
 basket[3]=&o;
 cout<<"\n"<<endl;

for(int i=0;i<4;i++)
{
    basket[i]->taste();
if(typeid(*basket[i])==typeid(orange))
{
    cout<<"   orange in basket  "<<endl;

orange *o=dynamic_cast<orange*>(basket[i]);
o->juice();
}

}

}