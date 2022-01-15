template <typename T>
void SqList<T>::reverse()	//逆值
{	
int d=0,t=0;
	if(length%2==0)
	{
		for(d=0;d<=length/2-1;d++)
		{
			t=data[d];
			data[d]=data[length-1-d];
			data[length-1-d]=t;
			
		}
	}
	else
	{
		for(d=0;d<=length/2-1;d++)
		{
			t=data[d];
			data[d]=data[length-1-d];
			data[length-1-d]=t;
		}
	}
	if(length>0)
	{
		for(d=0;d<length;d++)
		{
				cout<<data[d]<<' ';		
		}
		cout<<endl;
	}

}

   
