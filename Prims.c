#include<limits.h>
#include<stdbool.h>
#include<stdio.h>
#define V 5 /*No Of Vertices(Nodes)*/
void Prims_Algorithm(int[]);

int main()
{
    int i,j,Graph[V][V]={
        {0,3,5,2,1},
        {4,0,8,6,3},
        {8,4,0,6,1},
        {7,3,6,0,9},
        {4,2,6,1,0}
    }
    Prims_Algorithm(Graph);
}
void Prims_Algorithm(){

}