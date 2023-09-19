#include<iostream>
#include<cstdlib>
using namespace std;
int data[100];
int sum(int left,int right){
    if(left+1==right)
        return data[left]+data[right];
    if(left==right)
        return data[left];
    return data[left]+data[right]+sum(left+1,right-1);
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        data[i]=rand()%51-25;//1~50  -25~25
    }
    for(int i=0;i<n;++i){
        cout<<data[i]<<" ";
    }cout<<endl;
    cout<<sum(0,4);
    return 0;
}


