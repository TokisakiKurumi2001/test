#include <stdio.h>

//make a array to search in the int array
//print out on the screen the result
void search_array(int * array, int len_array, int keyword)
{
	int i = 0;
	//make a value find so that when looping through array and has the value match keyword, find will change
	int find = 0;
	//using for loop to through all elements in the array
	for(i = 0; i < len_array; i++)
	{
		//if the value we find is in the array so this thing happen
		if(*(array + i) == keyword)
		{
			//printf out the index
			find = find + 1;
			printf("%d is at index %d",keyword,i);
			break;
		}
	}
	//if we didn't find any value matching the keyword
	//meaning the loop through the array and find is still 0
	if(i >= len_array && find == 0)
	{
		printf("%d is not in the array",keyword);
	}
}

//return the index of the keyword
//if the keyword is not in the array return -1
int search_array_int(int * array, int len_array, int keyword)
{
	int i = 0;
	int find = 0;
	for(i = 0; i < len_array; i++)
	{
		if(*(array + i) == keyword)
		{
			find = find + 1;
			return i;
		}
	}
	if(i >= len_array && find == 0)
	{
		return -1;
	}
}

int search_array_string(char ** array, int len_array, char * keyword)
{
	int i = 0;
	int find = 0;
	for(i = 0; i < len_array; i++)
	{
		if(*(array + i) == keyword)
		{
			//printf out the index
			find = find + 1;
			return i;
		}
	}
	if(i >= len_array && find == 0)
	{
		return -1;
	}
}

int search_array_double(double * array, int len_array, double keyword)
{
	int i = 0;
	int find = 0;
	for(i = 0; i < len_array; i++)
	{
		if(*(array + i) == keyword)
		{
			//printf out the index
			find = find + 1;
			return i;
		}
	}
	if(i >= len_array && find == 0)
	{
		return -1;
	}
}

//check if the keyword is in the array or not
void check_index_int(int num, int keyword)
{
	if(num == -1)
	{
		printf("%d is not in the array\n",keyword);
	}else{
		printf("%d is at index %d\n",keyword,num);
	}
}

void check_index_string(int num, char * keyword)
{
	if(num == -1)
	{
		printf("%s is not in the array\n",keyword);
	}else{
		printf("%s is at index %d\n",keyword,num);
	}
}

void check_index_double(int num, double keyword)
{
	if(num == -1)
	{
		printf("%f is not in the array\n",keyword);
	}else{
		printf("%f is at index %d\n",keyword,num);
	}
}


int main(int argc, char * argv[])
{
	//make a array
	int number[] = {0,1,2,3,4};
	//safety take the length of the array
	int num_len = sizeof(number) / sizeof(int);
	//make the pointer to point to the array
	int * p = number;
	//init a function
	int index = search_array_int(p,num_len,1);
	check_index_int(index,1);

	index = search_array_int(p,num_len,5);
	check_index_int(index,5);


	//make a array of string
	char * names[] = {"Charlie","John","Elon","Mark","Bill","Steve"};
	int name_len = sizeof(names) / sizeof(char *);
	char ** point_char = names;

	index = search_array_string(point_char,name_len,"Charlie");
	check_index_string(index,"Charlie");

	index = search_array_string(point_char,name_len,"Raven");
	check_index_string(index,"Raven");

	//make the array of floating number
	double floating[] = {0.8,1.6,1.7,0.9,10.6};
	int floating_len = sizeof(floating) / sizeof(double);
	double * float_pointer = floating;

	index = search_array_double(float_pointer,floating_len,0.8);
	check_index_double(index, 0.8);

	index = search_array_double(float_pointer,floating_len,1.0);
	check_index_double(index, 1.0);

	return 0;
}