#include<iostream>
#include<vector>
using namespace std;

class students{
    private:
    string name;
    int age;
    char grade;
    public:
    students(){
        name="default";
        age=18;
        grade='a';
    }
    void acceptStudents(){
        cout<<"Enter the name::";
        cin>>name;
        cout<<"Enter the age::";
        cin>>age;
        cout<<"Enter the grade::";
        cin>>grade;
    }
    
    void diplaydetails(){
        cout<<"\nname::"<<name<<endl;
        cout<<"age::"<<age<<endl;
        cout<<"grade::"<<grade<<endl;
    }
};
int main(){
    vector<students>studentDetails;
    students s;
    for(int i=0; i<3; i++){
        s.acceptStudents();
        studentDetails.push_back(s);
    }
    for(int i=0; i<3; i++){
        
        studentDetails[i].diplaydetails();
    }


    return 0;
}