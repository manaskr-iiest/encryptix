#include <iostream>
#include <random>
#include<ctime>
using namespace std;

int main() {
    int n;
    int chances=0;
    int level;
    int lastno;
    cout<<"enter difficulty level [1/2/3]you want to play:";
    cin>>level;
    if (level==1){
        lastno=10;
        cout<<"guess no betn 1 and 10\n";
    }
    if (level==2){
        lastno=20;
         cout<<"guess no betn 1 and 20\n";
    }if (level==3){
        lastno=50;
         cout<<"Guess the  no between 1 and 50\n";
    }
    if (level>3)
    cout<<"wrong entry\n";
     srand((unsigned int) time(NULL));
int randomNumber=(rand() % lastno) + 1; // 0-99 + 1 -> 1-100
        while(chances<=5){
            cout<<"Enter no:";
            cin>>n;
            if(randomNumber==n){
              cout<<"Hurray!you won\n";
                cout << "Random number between 0 and "<< lastno<<" is :" << randomNumber << endl;
                     break;
            } 
            if(n>lastno){
                cout<<"Warning! Enter in Range\n";
                // chances--;
            }
            else if (n>randomNumber){
                cout<<"Ohh!\nGuessed no  is more than random no:\n";
            }
            else{
                cout<<"Ohh!\nGuessed no is less than random no\n";
            }
        chances++;
        
        }   
    if (chances>5){
        cout<<"\nOhh!\nYou Failed\nBetter luck next time";
    }
    else{
        cout<<"Hurray!YOU WON";
    }
    return 0;
}

