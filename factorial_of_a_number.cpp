#include<iostream>
using namespace std;
//Iterative implementation which takes T.C=O(n) and S.C=O(1).
// int fact(int n){
//    int res=1;
//    for(int i=1;i<=n;i++) 
//    {
//     res=res*i;
//    }
//    return res;
// }
// int main()
// {    
//     int number=6;
//     cout<<fact(number);
//     return 0;
// }
//Recursive implementation which takes T.C=O(n) and S.C=O(n).
int fact(int n){
    if(n==0)
    return 1;
    return n*fact(n-1);
}
int main(){
    int number=5;
    cout<<fact(number);
}