#include<iostream>
 #include<vector>
 #include<cstdio>
 using namespace std;

long long arr[10000000];
 vector<long long>v;
 void prime(long long N)
 {
      for(int i=3;i*i<=N;i=i+2)
     {
           if(arr[i]==0)
           {

               for(int j=i*i;j<=N;j=j+2*i)
               {

                   arr[j]=1;

               }

           }

     }
     v.push_back(2);
     for(int j=3;j<=N;j=j+2)
     {
         if(arr[j]==0)
         {

             v.push_back(j);
         }
     }


 }
 int main()
 {
     long long N;
     cout<<"Enter no. of prime numbers to show upto: ";
     cin>>N;
     prime(N);
     for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"  ";

    }


    return 0;
 }


