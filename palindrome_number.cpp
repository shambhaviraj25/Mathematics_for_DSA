#include<iostream>
using namespace std;
bool isPal(int n){
    int temp=n;
    int rev=0;
    while(temp!=0){
      int ld=temp%10; //ld=last digit
      rev=rev*10+ld;
      temp=temp/10;
    }
   return (rev==n);
}
int main()
{    
    int number=78987;
    if(isPal(number))
    cout<<"true";
    else
    cout<<"false";
    //cout<<(bool)isPal(number); this line will print 1 for true or 0 for false
    return 0;
}