#include "testBot.h"
#include "communication.h"
#include "walk.h"
#include <opencv2/opencv.hpp>
#include <cmath>
int main()
{
		
//	(void) signal(SIGINT,doquit);	
	Communication comm;
	testBot bot(&comm);
	Walk walk(&bot);
	
	// while(walk.velocity()*1.5<=90)
	// 	{
	// 		walk.accelerate();
	// 		walk.dribble();
	// 	}
	// while(1)
	// {
	double pi=acos(-1);
		walk.move(100.0,-pi/4);

	// 	cvNamedWindow("w");
	// 	char c= cvWaitKey(10);
	// 	if(c=='c' || c==27)
	// 			break;
	// }
	return 0;
	
	
};