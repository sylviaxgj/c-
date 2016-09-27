#include<iostream>
#include<cstring>
using namespace std;
template <typename T>
T maxn(T arr[],int n)
{
  T max=0;
  for(int i=0;i<n;i++)
  max=max>arr[i]? max:arr[i];
 
  return max;
}

template <>char* maxn(char *p[],int n)
{ 
   char *temp=NULL; 
   int len=0;  
  for(int i=0;i<n;i++)
     {len=strlen(p[i])>len? strlen(p[i]): len;
      temp=p[i] ;
     }
   return temp;
}

int main()
{
  int int_arr[6]={1,5,9,3,4,2};
 // int n=sizeof(int_arr);
  //cout<<n<<"changdu\n";
  double double_arr[4]={1.5,5.0,3.6,7.5};
  int imax=maxn(int_arr,sizeof(int_arr)/sizeof(int));
  double dmax=maxn(double_arr,sizeof(double_arr)/sizeof(double));
  cout<<"imax = "<<imax<<endl;
  cout<<"dmax = "<<dmax<<endl;
  char *ch[5]={"I","am ","not ","a ","little girl"};
  char *cmax=maxn(ch,sizeof(ch)/sizeof(char*));
  cout<<cmax<<endl;
 
 return 0;
}
