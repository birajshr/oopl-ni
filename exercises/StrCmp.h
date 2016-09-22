int my_strcmp(const char* string1, const char* string2)
{
	const unsigned char* char1 = (const unsigned char*)string1;
	const unsigned char* char2 = (const unsigned char*)string2;

	while(*char1 != '\0' && *char2 != '\0')
	{
		if (*char1 != *char2)
		{	
			int returnedCode = *char1 - *char2;
			return returnedCode;
		}
		char1++;
		char2++;
	}

	if (*char1 == '\0' && *char2 == '\0') return 0;
	if (*char1 == '\0') return (0 - *char2);
	if (*char2 == '\0') return (*char1);
}
