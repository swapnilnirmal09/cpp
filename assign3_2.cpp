#include<iostream>
 using namespace std;
class person{
    private:
    string name;
    string city;
    int age;
    public:
    person()
    {
        cout<<"default....";
        name="tejas";
        city= "pune";
        age=18;
    }
    person(string name,string city,int age)
    {
        cout<<"Person parameterised"<<endl;
        this->name=name;
        this->city=city;
        this->age=age;

    }
    void displayPerson(){
        cout<<"    "<<this->name<<endl;
        cout<<"    "<<this->city<<endl;
        cout<<"    "<<this->age<<endl;
    
    }
    void setName(string name){
        
        this->name=name;
    }
     void setCity(string city){
        
        this->city=city;
    }
    void setAge(int age){
        
        this->age=age;
    }
    string getName(){
        return name;
    }
    string getCity(){
        return city;
    }
     int getAge(){
        return age;
     }
};

  int main()
{


      person p2;
      p2.displayPerson();
    
    


    string name,city;

    int age;
    cout<<"Enter the name::";
    cin>>name;
    cout<<"Enter the city::";
    cin>>city;
    cout<<"Enter the age::";
    cin>>age;
   
    person p1( name,city,age);
    p1.displayPerson();
    
    


    cout<<"  get name::";
    cout<<"    "<<p1.getName()<<endl;
    
    


    cout<<"  get city::";
    cout<<"    "<<p1.getCity()<<endl;
    
    


    cout<<"  get age::";
    cout<<"    "<<p1.getAge()<<endl;

    
    

     cout<<"setters....";
     cout<<"Enter Name "<<endl;
    cin>>name;
    p1.setName(name);
    p1.displayPerson();
    
    


 
       cout<<"Enter city "<<endl;
       cin>>city;
       p1.setCity(city);
       p1.displayPerson();
    
    


        cout<<"Enter age "<<endl;
         cin>>age;
         p1.setAge(age); 
         p1.displayPerson();
    
   



    

return 0;
}