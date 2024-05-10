
#include <iostream>
using namespace std;

int main(){
    bool ships[4][4] = {
    { 0, 1, 1, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 1, 0 },
    { 0, 0, 1, 0 }
};
    int hit=0;
    int numberOfTurns=0;

    while(hit<4){
        int row,column;


        cout<<"Selecting codinate \n";
        

        cout<<"Choose a row number between 0 and 3 :";
        cin>>row;


        cout<<"Choose a column number between 0 and 3 :";
        cin>>column;


        if(ships[row][column]==0){
            hit++;
            cout<<"Hit!"<<(4-hit)<<"left. \n\n";

        }else{
            cout<<"Miss\n\n";
        }
        numberOfTurns++;
    }

    cout<<"Victory!\n";
    cout<<"You won in"<<numberOfTurns<<"turns";
return 0;

}