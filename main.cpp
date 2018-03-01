#include "SecretDoor/SecretDoor.h"
#include <iostream>
//Author Xinrui Li
using namespace std;

int main()
{
  SecretDoor game;
  
  int time;
  int wintime = 0;

  cout<<"How many times want to play?";
  cin>>time;
 
  for (int i = 0;i < wintime;i++)
  {
     game.newGame();
     game.guessDoorC();
     game.guessDoorC();
    if(game.isWinner() == true)
    {
    wintime++;
    }
  } 
  if(wintime<=1)
  {
    cout<<"You won "<<wintime<<" time"<<endl;
  }
  else
  {
    cout<<"You won "<<wintime<<" times"<<endl;
  }
  return 0;
}
