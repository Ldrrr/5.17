int firstUniqChar(char * s)
{
	int i,len,hash[26]={0};
	len=strlen(s);
	if(len==0) return -1;
	for(i=0;i<len;i++)
	{
		hash[s[i]-'a']++;
	}
	for(i=0;i<len;i++)
	{
		if(hash[s[i]-'a']==1) return i;
	}
	return -1;
}
