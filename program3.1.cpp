#include<iostream>

int main()
{
using namespace std;

int inch;
cout<<"please enter your height(inch):___\b\b\b ";
cin>>inch;
const int inch_per_feet=12;
cout<<"your height is "<<inch/inch_per_feet<<"  feet, and "<<inch%inch_per_feet<<"  inch(es)\n";
return 0; 
}
