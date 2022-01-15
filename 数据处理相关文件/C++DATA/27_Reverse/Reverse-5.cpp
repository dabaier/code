template <typename T>
void SqList<T>::reverse()	//逆值
{	
	int j,k,x;
	for(j=0;j<length;j++)
	{
		for(k=length-1;k>=0;k--)
		{
			if(data[j]>data[0]&&data[k]<data[0]&&j<=k)
			{
				x=data[j];
				data[j]=data[k];
				data[k]=x;
			}
		}
	}
}
