#include<iostream>
using namespace std;
template<class T>class employee{
	public:T empid;
	public:employee(T empid){
		this->empid=empid;
	}
	void print(){
		cout<<"  employee id :"<<empid<<endl;
	}
};



// class manager{
// 	public:int empid;
// 	public:manager(int empid){
// 		this->empid=empid;
// 	}
			
//};
int main(){
	
	// manager obj1(105);
	// obj1.empid=106;
	
	

	
	employee<int>  mg1(10);

      mg1.print();
	
	
	employee<string> mg2("IACSD");
	mg2.print();
	employee<double> mg3(56.67);
	mg3.print();
	
	return 0;
}

