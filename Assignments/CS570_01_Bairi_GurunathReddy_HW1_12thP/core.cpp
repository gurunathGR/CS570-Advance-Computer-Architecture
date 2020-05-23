#include <iostream>
using namespace std;

int main()
{
int count = 0,i,j,k,r,c;
int a[10][10], b[10][10], mul[10][10];

   cout<<"Enter Matrix Dimensions:\n";
   cout<<"Enter the no.of rows=";
   cin>>r;
   cout<<"Enter the no.of columns=";
   cin>>c;

   cout<<"Enter the first matriculates element=\n";
   for(i=0;i<r;i++)    
   {    
     for(j=0;j<c;j++)    
      {    
       cin>>a[i][j];  
       }    
   }

    cout<<"enter the second matrix element=\n";    
     for(i=0;i<r;i++)    
     {    
       for(j=0;j<c;j++)    
        {    
         cin>>b[i][j];    
        }    
     }    
    cout<<"multiply of the matrix=\n";
    auto start_time = chrono::high_resolution_clock::now();

    for(int i=0;i<r;++i)
    {
        count+=2;
        for(int j=0;j<c;++j)
        {
            count+=2;
            mul[i][j]=0;
            for(int k=0;k<c;++k)
                mul[i][j]+=(a[i][k]*b[k][j]);
            count+=4;
        }

    }
    auto stop_time = chrono::high_resolution_clock::now();
    long int t_time = chrono::duration_cast<chrono::nanoseconds>(stop_time-start_time).count();
    
     //for printing multiplication result    
     for(i=0;i<r;i++)    
     {    
       for(j=0;j<c;j++)    
        {    
         cout<<mul[i][j]<<" ";    
         }     
        cout<<"\n";    
      }    
       
    cout<<"Naive,"<<"Count = "<<count<<", time = "<<t_time<<", GFlops = "<<(float)count/t_time<<"ns";
     return 0;
 
}
