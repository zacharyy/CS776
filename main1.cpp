#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
double eval(int *pj);
int main()
{
	srand(time(NULL));
  int vec[100];
  int i;
  for(i = 0; i < 100; i++){
    vec[i] = 0;
  }
  double fitness;
	double fnew;
	int count = 0;
  fitness = eval(vec);
	//30-50 increases or decreases by 1 if they are 1
	//0-30 switching from 1 to 0 does nothing if rest are 1's
	//sign bits? in first 20? entire 20?
	//last 50 are plus or minus depending on sign bits? somewhere 
  for(i = 0; i < 5000; i++)
  {
			int temp = i % 100;
			if(count > 4)
			{
				int temp1 = rand() % 5;
				vec[temp-temp1] = (vec[temp-temp1] + 1) % 2;
				i -= temp1 -1;
				count = 0;
				fnew = eval(vec);
	 			if(fnew < fitness)
					vec[temp-temp1] = (vec[temp-temp1] + 1) % 2;
				else fitness = fnew;
			}
			else
			{
				vec[temp] = (vec[temp] + 1) % 2;
				fnew = eval(vec);
 				if(fnew < fitness)
				{
					count++;
 					vec[temp] = (vec[temp] + 1) % 2;
				}
				else
				{
					fitness = fnew;
				}
			}
			//cout << fitness << " ";
  }
  cout << endl << "fitness = " << fitness << endl;
}

