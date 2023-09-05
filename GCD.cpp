//Naive Approach
//GCD-Greatest Common Divisor or HCF-Highest Common Divisor
//T.C:O(min(a,b)) 
//S.C=O(1)
// #include<iostream>
// using namespace std;
// int gcd(int a ,int b){
//     int res=min(a,b);
//     while(res>0){
//         if(a%res==0 && b%res==0){
//             break;
//         }
//         res--;
//     }
//     return res;
// }
// 
//Optimized Euclidean Algorithm
//T.C=(log(min(a,b)))
//S.C=O(1)
#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int main(){
   int x=10,y=15;
   cout<<gcd(10,15);
   return 0;
}