#include "Circle.h"
#include <stdio.h>

void Circle::Size() {
	area = radius * radius * 3.14f;
}
void Circle::Draw() {
	printf("Circleの面積=%.1f\n", area);
}