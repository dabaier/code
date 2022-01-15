int KMP(SqString s,SqString t)
{
    int next[MaxSize],i=0,j=0;
    GetNext(t,next);
    while(i<s.length&&j<t.length)
    {
        if(j==-1||s.data[i]==t.data[j])
        {
            i++;
            j++;
        }
        else
            j=next[j];
    }
    if(j>=t.length)
        return (i-t.length);
    else
        return (-1);
}
