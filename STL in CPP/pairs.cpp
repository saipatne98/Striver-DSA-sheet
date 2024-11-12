#include<bits/stdc++.h>
using namespace std;

void pairs(){
    pair<int,int> p={1,3};
    cout<<" First:"<<p.first<<" Second:"<<p.second;
    
    cout<<"\n";

    pair<int,pair<int,int>> k={3,{2,4}};
    cout<<k.first<<" "<<k.second.second<<" "<<k.second.first;
    
    pair<int,int> arr[] ={{1,3},{4,6},{7,9}};
    cout<<"\nARRAY of pairs  "<<arr[2].second;

}



int main(){
    pairs();
}