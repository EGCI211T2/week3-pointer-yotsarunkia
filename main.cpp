#include <iostream>
#include <iomanip>


using namespace std;

int main(int argc,char *argv[]){
  int *pa, *pb, i, temp;
  int SIZE = argc - 1; 
  pa = new int[SIZE];
for (i = 0; i < SIZE ; i ++)
{
  *pa = atoi(argv[i+1]);
  *pa++;
}
*pa-=i;
/*
cout<<"Original: ";
for (i=0; i<SIZE-1; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;

pa = &a[0];  
pb = &a[SIZE-1];
*/
pb = new int[SIZE];
pb+=i;
for (i=0; i<SIZE/2; i++)
{
   temp = *pa;  
   *pa = *pb;  
   *pb = temp;
   pa++;  pb--;
}
pa-=i;
cout<<"Reversed: ";
for (i=0; i<SIZE-1; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;


return 0;
}
