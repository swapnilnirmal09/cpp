#include <iostream>
#include<fstream>
using namespace std;


int main(){
    ofstream outfile("alphabet.txt");
    for(int i=65;i<91;i++){
    outfile.write((char*)&i,sizeof(i));
    
    }
    outfile.close();

  ifstream infile("alphabet.txt");
  string line;
  while(getline(infile,line)){
    cout<<line<<endl;
  }
   
    return 0;
}