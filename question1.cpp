#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;//intialising variables
    long output;
    cin>>n>>m;//givivg variables declared as input
    if (n!=0){
        i=n-1;
    }
    if (m!=0){
        j=m-1;
    }
    output=i+j;
    cout<<output;//getting the output required
}
//LOGIC:
//we take the number of rows and columns 
//if number of rows is not equal to zero than we subtract 1 and store it in i
//if number of columns is not equal to zero than we subtract 1 and store it in j
//our required output is i+j
