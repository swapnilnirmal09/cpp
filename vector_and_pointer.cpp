#include<iostream>
#include<vector>

using namespace std;

int main1(){
    int arr[5];
    int *p;
    p=arr;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<" "<<arr[i]<<endl;
    }
//     return 0;
// }

// int main(){
//     int num=0;
//     vector<int>numbers;
//     while(num>=0){
//     cin>>num;
//     if(num>0){
    
//      numbers.push_back(num);
//     }
//     else{break;}
//     }
//     for(int i=0;i<5;i++){
//         cout<<"  "<<i<<":"<<"  "<<numbers[i]<<endl;
//     }
    return 0;
}
