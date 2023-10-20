#include<iostream>
using namespace std;

class employee{
protected:
int empid;
string name;
protected:
double basicsal=10000,netsal;

public:
  employee(){
  empid=101;
  name="tejas";
  }
  employee(int empid,string name){
  this->empid=empid;
  this->name=name;
  }
  employee(employee&obj){
  this->name=obj.name;
  this->empid=obj.empid;
  }
  ~employee(){
  cout<<"\ndestructor"<<endl;
  }
  void acceptDetails(){
  cout<<"enter the name::"<<endl;
  cin>>name;
  cout<<"enter the empid::"<<endl;
  cin>>empid;
  }
  void displayDetails(){
  cout<<"name::"<<name<<endl;
  cout<<"empid::"<<empid<<endl;
  }
  string getName(){
  return name;
  }
  void setName(string &name){
  this->name=name;
  }
  void netsalary(){
    netsal=basicsal;
    cout<<"netsalary::"<<netsal;
  }
  virtual void holiday(){
  cout<<"holiday of 1 day";
    };
};
   class manager:public employee{
    private:
    double incentives;
    public:
   
    void holiday(){
    cout<<"holiday of 2 days per week"<<endl;
  }
    void netsalary(){
    cout<<"Enter incentives::"<<endl;
    cin>>incentives;
    netsal=basicsal+incentives;
    cout<<"netsalary::"<<netsal;
  }
   };







    int main(){
    string name;
    employee e1;
    e1.acceptDetails();
    e1.displayDetails();
    employee e2(e1);
    e2.displayDetails();
   
    name=e1.getName();
    cout<<"name::"<<name;
    cout<<"\nenter name to changed::"<<endl;
    cin>>name;
    e1.setName(name);
    e1.displayDetails();
    manager m1;
    m1.acceptDetails();
    m1.displayDetails();
    m1.netsalary();
   
    return 0;
}
