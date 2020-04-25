#include<bits/stdc++.h>
using namespace std;
void citire()
{
    ifstream f("fuel.in");
    int x, s=0;
    while(f>>x){
        int y=x;
        while(y>0){
            y=(floor(y/3)-2);
            if(y>0)
            s+=y;}
    }
    cout<<s;
}
int main()
{
    citire();
}
