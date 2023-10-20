#include<iostream>
#include<vector>
using namespace std;
int main()
{
 vector<int>numbers;
 int input;
 int end= -1;

 while(true)
{
    cout<< "ente r the ip";
    cin>>input;
if(input==end){
    break;
}numbers.push_back(input);

}
cout<<" vector contains";
for(int num:numbers){
   cout<<num<<endl;
}
int sum=0;
for(int num:numbers){
sum+=num;
}
double average=static_cast<double>(sum)/numbers.size();

cout<<"sum::  "<<sum<<endl;
cout<<"average::  "<<average<<endl;
}