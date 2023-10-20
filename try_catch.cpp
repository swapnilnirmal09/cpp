
#include <iostream>
using namespace std;
class student{
    private:
    int rollno,age;
    string name;
    public:
    void studentCreation(int rollno,int age,string name){
        this->rollno=rollno;
        this->age=age;
        this->name=name;

    }
    void studentDiplay(){
        cout<<"Name::"<<name<<endl;
        cout<<"rollno::"<<rollno<<endl;
        cout<<"age::"<<age<<endl;
    }
};
int main(){
    try{
    int rollno,age;
    string name;
    cout<<"Enter the details for student creation"<<endl;
    cout<<"Enter the name::"<<endl;
    cin>>name;
    cout<<"Enter the rollno::"<<endl;
    cin>>rollno;

    cout<<"Enter the age::"<<endl;
    cin>>age;
    if(age<18){
        throw "age is less than 18";
    }
    student s1;
     s1.studentCreation(rollno,age,name);
     s1.studentDiplay();
    }catch(const char* str){
    cout<<"Error:"<<str<<endl;
}
    catch(...)
{
    cout<<"exception"<<endl;
}    
   
    return 0;
}