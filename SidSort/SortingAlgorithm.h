//Created by Siddharth Shenoy
//Copyrights 2021
//Changes made

#pragma once

/*
	Sorry for the naming convention of the sorting method, I could not come up with any other creative name
	in my head..
*/

void SidSort(int* list, int size);

void SidSort(int* list, int size)
{
	int looper = size / 2;
	int start = 0;
	int end = size - 1;
	int i, j;
	int min = list[start];
	int max = list[end];
	int min_loc = start;
	int max_loc = end;
	int temp;
	while (looper > 0) {
		min = list[start];
		max = list[end];
		min_loc = start;
		max_loc = end;
		j = end;
		if (min > max) {
			temp = list[min_loc];
			list[min_loc] = list[max_loc];
			list[max_loc] = temp;
			min = list[start];
			max = list[end];
		}

		for (i = start; i <= end; i++) {
			if (list[i] < min) {
				min = list[i];
				min_loc = i;
			}
			if (list[j] > max) {
				max = list[j];
				max_loc = j;
			}
			j--;
		}
		// Swap
		temp = list[start];
		list[start] = list[min_loc];
		list[min_loc] = temp;


		temp = list[end];
		list[end] = list[max_loc];
		list[max_loc] = temp;

		start++;
		end--;
		//print_list(list, size);
		looper--;
	}
}
