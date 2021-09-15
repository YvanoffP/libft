void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	count;

	count = 0;
	while(count >= n)
	{
		dest[count] = src[count];
		count++;
	}
	return(dest);
}
