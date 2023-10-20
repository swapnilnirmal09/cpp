#include<iostream>
#include<fstream>
using namespace std;
class employee{
private: int empid;
        string name;
 
 protected: double salary;
 
 public: 
      employee(){
      	empid=10;
      	name="default";
      	salary=15000;
	  }
employee(int empid,string name,double salary){
	this->empid=empid;
	this->name=name;
	this->salary=salary;
}	  
virtual void calsalary(){
	cout<<"the salary is::"<<salary<<endl;
}
virtual void display(){
	cout<<"  employee id::  "<<empid<<" name is::  "<<name<<"  salary is::  "<<salary<<endl;
}
	  
};
class manager : public employee{
	private: string deptname;
	        double incentives=20000;
	        
	public:
	manager(int empid,string name,double salary,string deptname) :employee(empid,name,salary){
		this->deptname=deptname;
		//this->incentives=20000;
        
	}     
	void calsalary(){
        cout<<"manager salary is::"<<this->salary+incentives<<endl;
		
	}
};
class worker:public employee{
    private:string departname;
           double hourlyrate=500;
           double hours;
    public:
     worker(int empid,string name,double salary,string departname) :employee(empid,name,salary) {
        this->salary=salary;
        this->departname=departname;
     }
    void calsalary(){
        cout<<" enter hours worked::"<<endl;
        cin>>hours;
        cout<<" worker salary is::"<<this->salary+(hourlyrate*hours);
    }

};

int main(){
	
	employee e1;
	e1.display();
	employee e2(20,"swapnil",50000);
	e2.display();
	
manager m1(30,"subhash",70000,"mechanical");
m1.calsalary();
m1.display();

worker w1(40,"nirmal",50000,"civil");
w1.display();
w1.calsalary();
cout<<"\n";
employee *baseptr=new manager(50,"tejas",60000,"mech");
baseptr->calsalary();
employee *ptr= new worker(70,"xxx",70000,"civ");
ptr->calsalary();

employee* iacsd[3];
iacsd[0]=&e1;
iacsd[1]=&m1;
iacsd[2]=&w1;

ofstream outfile("employee.dat");
for(int i=0;i<3;i++){
	iacsd[i]->calsalary();
	outfile.write((char*)iacsd[i],sizeof(employee));
	
}
outfile.close();
return 0;
}