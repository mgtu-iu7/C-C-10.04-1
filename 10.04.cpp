//Square-in-circle task.

#include "stdafx.h"
#include <conio.h>
#include <math.h>

int _tmain(int argc, _TCHAR* argv[])
{
	float r, x, y;

	printf("Input r, x, y\n");

	scanf("%f %f %f", &r, &x, &y);

	if (x*x + y*y > r*r) {
		printf("The point is out of circle\n");
	}
	else if (fabs(y) <= (r - fabs(x))) {
		printf("The point is in the square\n");
	}
	else {
		printf("The point is in the circle, but out of square\n");
	}

	//else if((fabs(y) > (r - fabs(x))) && (x*x + y*y <= r*r)) {
	//	printf("The point is in the circle, but out of square\n");
	//}

	_getch();
	return 0;
}
