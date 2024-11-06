#include "Rectangle.h"
#include <stdio.h>

void Rectangle::Size() {
	area = x * y;
}
void Rectangle::Draw() {
	printf("Circleの面積=%.1f\n", area);
}