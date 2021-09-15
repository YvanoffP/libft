void *memccpy(void *dest, const void *src, int c, size_t n)
{
	int count;

	count = 0;
	while(count <= n && src[count] != c)
	{
		dest[count] = src[count];
		count++;
	}
	return(
}
