#include "Utility.h"


bool IsCircleClicked(float circle_center_x, float circle_center_y, float diameter, float click_x, float click_y)
{
	float dx = click_x - circle_center_x;
	float dy = click_y - circle_center_y;

	if (dx * dx + dy * dy <= diameter * diameter) {
		return true;
	}
	else {
		return false;
	}
}