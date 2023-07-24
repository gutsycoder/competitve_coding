// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int getIthBit(int n,int i){
    
    return (n<<i & n)>0?1:0;
    
}
void clearIthBit(int n , int i){
    int mask = ~(1<<i);
    n= n&mask;
}

void updateIthBit(int &n,int i , int v){
    //code for updating the ith bit 
    clearIthBit(n,i);
    int mask  =(v<<i);
    n=n|mask;
}



void setIthBit(int &n,int i){
    int mask = (1<<i);
    n= (n|mask);
}
int main() {
    // Write C++ code here
    cout << "Hello world!"<<endl;
    int n=13;
    int i;
    cin>>i;
    // setIthBit(n,i);
    // cout<<n;
    
    // cout<<getIthBit(n,i) <<endl;
    
    // clearIthBit(n,i);
    
    //cout<< n<<endl;
    updateIthBit(n,i,1);
    cout<<n<<endl;


    return 0;
}