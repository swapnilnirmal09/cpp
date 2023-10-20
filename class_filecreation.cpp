#include<iostream>
#include<fstream>
using namespace std;
class employee{
    private:
    int empono;
    string name;
    double salary;
    public:
    employee()
    {
        name="default";
        empono=000;
        salary=25000;
    }
    void acceptdetails(){
         cout<<"Enter the name::";
        cin>>name; 
        
        cout<<"Enter the empono::";
        cin>>empono;
       
        cout<<"Enter the basicsalary::";
        cin>>salary;

    }
    void printdetails(){
        cout<<" name::"<<name<<endl;
        cout<<" empono::"<<empono<<endl;;
        
        cout<<" basicsalary::"<<salary<<endl;

    }
};

int main(){
      employee e1;
     e1.acceptdetails();
     ofstream outfile("employee.dat");
     outfile.write((char *)&e1,sizeof(employee));
     outfile.close();
     
       ifstream infile("employee.dat");
       string line;
     while(getline(infile,line)){
        cout<<line<<endl;
     }
    infile.close();
    

}
