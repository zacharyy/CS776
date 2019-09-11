// max = 400 with 25 0's then 25 1's then 25 0's then 25 1's
// min = -100 with all 1's
double eval(int *pj)
{
	double total = 0;
	for(int i = 0; i < 25; i++)
	{
		if(pj[i] == 1) total += 1;
		else total -= 2;
	}
	for(int i = 25; i < 50; i++)
	{
		if(pj[i] == 1)
			if(pj[i - 25] == 0) total += 10;
			else total -= 3;
		else total += 2;
	}
	for(int i = 50; i < 75; i++)
	{
		if(pj[i] == 1) total += 1;
		else total -= 2;
	}
	for(int i = 75; i < 100; i++)
	{
		if(pj[i] == 1)
			if(pj[i - 25] == 0) total += 10;
			else total -= 3;
		else total += 2;
	}
}
