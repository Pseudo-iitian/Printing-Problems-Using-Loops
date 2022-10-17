// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    //    4 4 4 4 4 4 4  
    // 4    3 3 3 3 3    4   
    // 4 3    2 2 2    3 4  
    // ----------------------- mirror image
    // 4 3 2    1    2 3 4  
    // ----------------------- mirror image 
    // 4 3    2 2 2    3 4   
    // 4    3 3 3 3 3   4   
    //    4 4 4 4 4 4 4     
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=n;j>i;j--){
            cout<<j<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<i<<" ";
        }
        for(int j=i;j<n;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    for(int i=2;i<=n;i++){
        for(int j=n;j>i;j--){
            cout<<j<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<i<<" ";
        }
        for(int j=i+1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}