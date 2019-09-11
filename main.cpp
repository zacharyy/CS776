#include <iostream>

using namespace std;

double eval(int *pj);

int main()
{
  int vec[100];

  int i;

  for(i = 0; i < 100; i++){
    vec[i] = 0;
  }
  double fitness;
	double fnew;
  fitness = eval(vec);
  for(i = 0; i < 100; i++)
  {
 		vec[i] = 1;
		fnew = eval(vec);
 		if(fnew < fitness) vec[i] = 0;
		else fitness = fnew;
		//cout << fitness << " ";		
  }
  cout << endl << "fitness = " << fitness << endl;
  
}

