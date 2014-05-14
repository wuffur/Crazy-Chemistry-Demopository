define N = 512

struct SuperPositioning{
	bool neg;    /*     +1 or -1      */
	char angle;  /* 0/81 ... 255/81 almost equals Pi number */
        float ProjectionSize; /* 0. ... 1. Depending on where it lies on plane or not */
    
	
	//int* projectionX; /* 0..512 */
	//int* projectionY; /* 0..512 */ 
	int* projection;
	projection = bool* malloc(int N,int N); /* whether dot inside dat field or not */ 
	/*  Triangle - smth like dat
	        0 0 0 0 0 0 0 1 0 0 0
		0 0 0 0 0 0 0 0 0 0 0 
		0 0 0 0 0 0 0 0 0 0 0 
		0 0 0 0 0 0 0 0 0 0 0 
		0 0 0 0 0 0 0 0 0 0 0 
		0 0 0 0 0 0 0 0 0 0 0 
		0 0 1 0 0 0 0 0 0 0 0 
		0 0 0 0 0 0 0 0 0 0 0 
		0 0 0 0 0 0 0 0 0 1 0 
		0 0 0 0 0 0 0 0 0 0 0 
	                            */
}

#include<math.c>
void main()
{
    
	for(i=0;i<N;i++){
		for(j=0;i<N;i++){
		    Func = sinh(i/81*Pi)*cosh(i/81*Pi) - sqrt(2)/2*exp(i*j/3**8);
		}
	}
	
	return 0;
}
