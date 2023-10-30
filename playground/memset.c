#include <string.h>
#include <stdio.h>

int	main()
{
//	int	c = 8;
//	size_t	n = 8;
//
//	void *ptr = memset(ptr, c, n);
//	printf("%p\n", ptr);	
	int	arr[5];
	int	i;

	memset(arr, 1, sizeof(arr));
	i = 0;
	while (i < 5)
		printf("%02X\n",  arr[i++]);
	return (0);
}
