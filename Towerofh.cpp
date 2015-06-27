#include<iostream.h>

void AmountOnPegs(int,int,int[]);

void main(void)
{
  int n; //variable for number of rings
  
  void toh(int,int,int,int, int[]);
  
  cout << "\nEnter rings ";
  cin>> n;
  
  int total[4] ={0,n,0,0}; //creates array to keep track of how many rings are on each peg

  cout << "\n\tfrom\tTo";
  toh(n,1,2,3, total);
  
  return;
}

void toh(int n, int start, int goal, int temp, int total[])
{
  void move(int,int);
  
  if (n==0) //if there are no rings to be moved return to next line to be executed
  {
	 //cout <<"\nreturn number of pegs = 0";
	 return;
  }

  //cout << '\n' << n << ' ' << start << ' ' << goal << ' ' << temp;
  toh (n-1,  start, temp, goal, total);
  
  //cout << "\nreturn 1 from start, temp, goal";
  move (start, goal);
  AmountOnPegs(start, goal, total);

  toh(n-1, temp, goal, start, total);
  
  //cout <<"\nReturn 2 from temp, goal, start";
  
  return;
}

void AmountOnPegs(int start, int goal, int total[])
{
	//void DrawPegs(int total[]); //draws the amount of rings on each peg

	total[start] -= 1; //from what ever peg a ring is being moved from, -1 ring off that peg
	total[goal] += 1;  //and adds it to the peg being moved to
	
	cout << "\n Peg1: " << total[1] << " Peg2: " << total[2]
		 << " Peg3: " << total[3] << '\n';
		 
	return;
}



void move (int start, int goal)
{
  cout <<"\n\t" << start << '\t' << goal << '\n'; //prints out where a peg is being moved
  return;										// from to where it is being put
}
