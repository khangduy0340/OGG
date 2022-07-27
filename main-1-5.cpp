#include <iostream>
using namespace std;
int count_evens(int number){
if(number<0) // intial condition
return 0;
int countNo = 0;
int count = number - 1;
for(int i = 0;i<count;i++){
    if(i % 2 == 0) // exclusive condition
       countNo ++;
}
return countNo;
}   
// driver
int main(){
int number = 5;
cout << "The number of even number is: " << count_evens(number); 
return 0;
}