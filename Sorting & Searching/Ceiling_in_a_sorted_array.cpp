#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

/* Function to get index of ceiling of x in vec[low..high] */
int ceilSearch(vector<int> &vec, int low, int high, int x) 
{ 
	
	int i; 
	
	/* If x is smaller than or equal to first element, 
		then return the first element */
	if(x <= vec[low]) 
		return low; 
	
	/* Otherwise, linearly search for ceil value */
	for(i = low; i < high; i++) 
	{ 
		if(vec[i] == x) 
		return i; 
	
		/* if x lies between arr[i] and arr[i+1] including 
		arr[i+1], then return arr[i+1] */
		if(vec[i] < x && vec[i+1] >= x) 
		return i+1; 
	}	 
	
	/* If we reach here then x is greater than the last element 
		of the array, return -1 in this case */
	return -1; 
} 


/* Driver code*/
int main() 
{ 
	vector<int> vec = {1, 2, 8, 10, 15, 22, 69}; 
	int x = 15; 
	int index = ceilSearch(arr, 0, vec.size()-1, x); 
	if(index == -1) 
		cout << "Ceiling of " << x << " doesn't exist in vector "; 
	else
		cout << "ceiling of " << x << " is " << vec[index]; 	
	return 0; 
}
