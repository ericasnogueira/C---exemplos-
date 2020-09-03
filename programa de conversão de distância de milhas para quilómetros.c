#include <stdio.h>
#define MIL_QUI 1.609
   
    int main (void)
    {
    	double aMILHAS, aQUILOMETROS;
    	do 
    	{
    		printf ("Distancia em milhas ? ");
    		scanf (" %lf", &aMILHAS );
		} while ( aMILHAS < 0.0);
		aQUILOMETROS = MIL_QUI * aMILHAS;
		printf ("Distancia em quilometros é %8.3f\n", aQUILOMETROS );
		return 0;
	}
