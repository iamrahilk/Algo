#include<limits.h>
#include<stdbool.h>
#include<stdio.h>
#define V 5 //No Of Vertices(Nodes)

int main()
{
    int i,j,Graph[V][V]={
        {},
        {},
        {},
        {},
        {}
    }
    Prims_Algorithm(Graph);
}