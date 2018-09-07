//to draw a particular triangle of a star with specific pattern
//*
//**
//***
//****
//*****
#include<iostream>
using namespace std;
int main()
{
int i, j;
for(i=0; i<5; i++)
{
for(j=0; j<=i; j++)
{
cout<<"*";
}
cout<<"\n";
}
return 0;
}
