#include<iostream>
using namespace std;
int main() {
   int n;
   cin>>n;

   int i = 1;
   while(i <= n){
      int j = 1;
      int value = i;
        while(j <= i){
         cout<<value;
         value++;
         j++;

        }
        cout<<endl;
        i++;
    }
  
}

//SECOND APPROACH WITHOUT USE VALUE

// #include<iostream>
// using namespace std;
// int main() {
//   int n;
//   cin>>n;

//   int i = 1;
//   while(i <= n){
//     int j = 1;
   
//     while(j <= i ){
//       cout<<i + j - 1;
        
//       j++;

//     }
//     cout<<endl;
//     i++;
//   }
  
// }