template <typename T>
void SqList<T>::CreateList()	//建立顺序表,当输入为-1时，顺序表输入结束
{	
	int elem,i;	
	length=0;
	for(i=0;i<MaxSize;i++)
	{
		cin>>elem;
		if(elem==-1)
		{
			break;
		}
		else
		{
			data[i]=elem;
		}
	}
	length=i;
}
