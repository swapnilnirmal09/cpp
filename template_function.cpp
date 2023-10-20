 #include <iostream>  
using namespace std;  

template<class T>void swap1(T &a,T &b)
{
	T temp=a;
	a=b;
	b=temp;
	
}
int main()  
{  
  int i =2;  
  int j =3;  
  float m = 2.3;  
  float n = 1.2;  

  string k="swapnil";
  string d="nirmal";
 
  
  swap1(i,j);
  cout<<"\n Swap:a="<<i<<" swap  b="<<j;

  swap1(m,n);
 cout<<"\n Swap:m="<<i<<" swap  n="<<j;

 swap1(k,d);
 cout<<"k::"<<k<<"d::"<<d<<endl;

  return 0;  
}  