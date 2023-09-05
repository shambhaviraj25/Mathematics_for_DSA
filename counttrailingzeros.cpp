// Naive approach:to solve trailing zeros in factorial
// T.C=theta(n);
// #include <iostream>
// #include<limits>
// using namespace std;

//  int countTrailingZeros(int n)
// {
//     int fact=1;
//     for(int i=2;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     int count=0;
//     while(fact%10==0){
//         count++;
//         fact/=10;
//     }
//     return count;
// }
// int main() {
//     int number =5;
//     cout<<countTrailingZeros(number);
//     return 0;
// }
//Efficient Approach 
//T.C=theta(log)
#include<iostream>
using namespace std;
int countTrailingZeros(int n){
    int res=0;
    for(int i=5;i<=n;i=i*5){
        res=res+n/i;
    }
    return res;
}
int main(){
    int number=251;
    cout<<countTrailingZeros(number);
    return 0;
}
