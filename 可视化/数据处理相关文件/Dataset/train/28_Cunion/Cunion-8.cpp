template <typename T>
void union1(SqList<T> &L,SqList<T> &K)
{
    int l,k,i=1,j=0;
    k=K.ListLength();
    while(i<=k)
    {   l=L.ListLength();
        K.GetElem(i,j);
        if(L.LocateElem(j)==0)
        {
            L.ListInsert(l+1,j);
        }
        i++;
    }
}
