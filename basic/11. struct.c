#include<stdio.h>
#include<math.h>

struct point {
	int x, y;
};

void comparePoint (struct point p1, struct point p2) {
	if((p1.x == p2.x) && (p1.y == p2.y)) printf("same\n");
	else printf("different\n");
}

int main(void) {
	struct point p1, p2;
	
	int xd, yd;
	double dis;
	
	scanf("%d %d", &p1.x, &p1.y);
	scanf("%d %d", &p2.x, &p2.y);
	
	xd = p1.x-p2.x;
	yd = p1.y-p2.y;
	
	dis = sqrt(pow(xd,2)+pow(yd,2));
	
	printf("%f\n",dis);
	
	comparePoint(p1,p2);
	
	return 0;
}
