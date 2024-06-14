#include <iostream>
using namespace std;
int main(){
int row=3;
int col=3;
char arr[3][3]= {
        {'_', '_', '_'},
        {'_', '_', '_'},
        {'_', '_', '_'}
    };
char current_player ='X';
bool flag=false;


    while(flag!=true){
    
    cout << "\nCurrent board:\n";
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int rowno,colno ; 
    cout<<"Chance goes to :"<<current_player<<endl;
    cout<<"enter coodinates x y:\n";
     cin>> rowno >> colno ;
      arr[rowno][colno]=current_player;

        for(int j=0;j<3;j++){
            if (arr[0][j]==current_player&&arr[0][j]==arr[1][j]&&arr[0][j]==arr[2][j]){//who win x or o
              cout<<"player "<<current_player<<" wins!";
                 flag=true;
                
            }
        }
        for (int i=0;i<3;i++){//
        if(arr[i][0]==current_player&&arr[i][0]==arr[i][1]&&arr[i][0]==arr[i][2]){
                flag=true;
                 cout<<"player "<<current_player<<" wins!";
            }       
        }

        if(arr[0][0]==current_player&& arr[1][1]==current_player&&arr[2][2]==current_player){
            flag=true;
             cout<<"player "<<current_player<<" wins!";
        }    

        if ((arr[0][2]==current_player&&arr[1][1]==current_player&&arr[2][0]==current_player)){
                flag=true;
                 cout<<"Player "<<current_player<<" wins!";
        }
         // Switch players
        current_player = (current_player == 'X') ? 'O' : 'X';
       
        }
        // Game is over, print final board and winner
        cout << "\nFinal board:\n";
        for (int i = 0; i < row; ++i) {
          for (int j = 0; j < col; ++j) {
            cout << arr[i][j] << " ";
          }
          cout << endl;
        }
          
          return 0;
    }
   
 