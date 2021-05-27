#include <iostream>
#include <limits.h>

using namespace std;

//Compares 2 values and returns the bigger one
int max(int a,int b) {
    int ans=(a>b)?a:b;
    return ans;
}

//Compares 2 values and returns the smaller one
int min(int a,int b){
    int ans=(a<b)?a:b;
    return ans;
}

int egg(int n,int h){

    //Basis case
    if(n==1) return h;
    if(h==0) return 0;
    if(h==1) return 1;

    int minimum=INT_MAX;

    //Recursion to find egg(n,k). The loop iterates i: 1,2,3,...h
    for(int x=1;x<=h;x++) minimum=min(minimum,(1+max(egg(n,h-x),egg(n-1,x-1))));

    return minimum;
}

int main()
{
    int e;//Number of eggs
    int f;//Number of floors

    cout<<"Egg dropping puzzle\n\nNumber of eggs:";

    cin>>e;

    cout<<"\nNumber of floors:";

    cin>>f;

    cout<<"\nNumber of drops in the worst case:"<<egg(e,f);

    return 0;
}
