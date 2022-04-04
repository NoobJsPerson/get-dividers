#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int i = atoi(argv[1]);
	int j = 1;
	for(int c =1; c <= i;j++) c = j*j;
	j--;
	int l = (i == 1 ? 0 : 1);
	int* arr = (int*)malloc((j*2-1)*sizeof(int));
	arr[0] = 1;
	for(int k = 2; k <= j; k++)
	{
		if(i%k == 0){ 
			arr[l] = k;
			l++;
			if(i/k != k){
				arr[l] = i/k;
				l++;
			}
		}
	}
	arr[l] = i;
	for(int k = 0; k < l+1; k++)
	{
		printf("%d ", arr[k]);
	}
	printf("\nnumber of dividers: %d",l+1);
	return 0;
}