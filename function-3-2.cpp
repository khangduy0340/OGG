#include <iostream>
using namespace std;
int median_array(int array[], int n)
{
// Initial condition
if(n<1||n%2==0)
return false;
int median_no;
median_no = (n/2); 
int temporary;
// Create additional space to store temporary data that is used for swapping
   for(int i = 0;i<n;i++)
   {
    for(int j = i+1;j<n;j++)
    {
     if(array[j]<array[i]){
     temporary = array[i];
     array[i] = array[j];
     array[j] = temporary;   
    }
   } 
   
}
cout << "The sorted array is: ";
   for(int i =0; i<n;i++)
   {
    cout << array[i] << ",";
   }
   cout << " The median is: ";
   return array[median_no];
}
