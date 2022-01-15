template <typename T>
void union1(SqList<T> &A,SqList<T> &B)
{
    int i,j,x,y;
    for(i=0;i<B.ListLength();i++)
    {
        B.GetElem(i+1,x);
        int a=1;
        for(j=0;j<A.ListLength();j++)
        {
            A.GetElem(j+1,y);
            if(x==y)
            {
                a=0;
            }
        }
        if(a==1)
        {
            A.ListInsert(A.ListLength()+1,x);
        }
    }
}
