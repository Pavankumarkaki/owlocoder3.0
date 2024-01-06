// The shortest path length between two given nodes such that adjacent nodes are at bit difference 2

// Given an Unweighted and Undirected graph consisting of N nodes and two integers a and b. 
// The edge between any two nodes exists only if the bit difference between them is 2, 
// the task is to find the length of the shortest Path between nodes a and b. If a path does not exist between the nodes a and b, then print -1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,a,b;
    cin>>n>>a>>b;
    int x=a^b;
    int c=0;
    for(int i=0;i<32;i++)
    {
        if(x& (1<<i)) c++;
    }
    if(c%2!=0)
        cout<<-1;
    else{
        cout<<c/2;
    }
}
