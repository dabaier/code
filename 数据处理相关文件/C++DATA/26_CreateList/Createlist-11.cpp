template <typename T>
void SqList<T>::CreateList()	//建立顺序表,当输入为-1时，顺序表输入结束
{	
 int i;
    for(i=0; i<MaxSize; i++)
    {
        cin>>data[i];
        if(data[i]==-1)
        {
            break;
        }
    }
    length=i;
}
