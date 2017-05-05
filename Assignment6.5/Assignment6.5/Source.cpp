#include <iostream>
//Chance Daily 5/4/2017 Assignment 6.5
int main()
{
	int compare = 0;
	int num[6] = { 23, 6, 47, 35, 2, 14 };
	
	for (int n = 0; n < 6; n++)//goes through each number in the array
	{
		if (num[n]>compare)//if statement compares the variable 'compare' (0) to each number and sets itself to the highest value
			compare = num[n];
	}
	std::cout << "The largest value in the array is: " << compare << std::endl;
}