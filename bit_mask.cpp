// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int getIthBit(int n,int i){
    
    return (n<<i & n)>0?1:0;
    
}
void updateIthBit(int i,int n , int v){
    //code for updating the ith bit 
}

void clearIthBit(int n , int i){
    int mask = ~(1<<i);
    n= n&mask;
}


void setIthBit(int &n,int i){
    int mask = (1<<i);
    n= (n|mask);
}
int main() {
    // Write C++ code here
    cout << "Hello world!"<<endl;
    int n=5;
    int i;
    cin>>i;
    setIthBit(n,i);
    cout<<n;
    
    cout<<getIthBit(n,i) <<endl;
    
    clearIthBit(n,i);
    
    cout<< n<<endl;
    return 0;
}