#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Guess the number in the range of 0 to 10 :: ";
    
    srand(time(0));

    int randomNumber = rand()%10;

    cout << randomNumber << endl ;
    cout << "\n\n=========GUESS THE NUMBER GAME=========\n\n";
    do{
        cin >> n;
        if(randomNumber == n){
            cout << "you found the number....\n suuuuuppppeeerrrrrrrr \n\n";
        }else{
            cout << "Not the correct guess.... try again!!!\n";
        }
    }while(randomNumber != n);

    
    return 0;
}
