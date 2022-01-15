template <typename T>
void SqList<T>::reverse()	//逆值
{	
int i,temple;
for(i=0;i<=(length-1)/2;i++)
{
temple=data[i];
data[i]=data[length-i];
data[length-1]=temple;
}
}
