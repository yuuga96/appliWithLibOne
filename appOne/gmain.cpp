#include"libOne.h"
void gmain() {
	window(800, 800);
	float v = 400;
	while (notQuit)
	{
		v += 1;
		clear(220);
		circle(v, 400, 400);
	}
}