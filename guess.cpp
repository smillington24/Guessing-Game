#include <cstdlib>

#include <time.h>

#include <iostream>

 

using namespace std;

 

int main()

 {

      srand(time(0));

      int number;

      number = rand() % 1000 + 1;

      int guess;

do 
{
    cout<<"Enter number:";
    cin>>guess;

 if(guess<number)
 {
     cout<<"Number is too low =(";
 }
 
 else if(guess>number)
 {
     cout<<"Number is too high =(";
 }
 
 else
 {
     cout<<"You guessed right! =)";
 }
}
           
           while(guess!=number);
          

      system("PAUSE");

      return 0;

}
