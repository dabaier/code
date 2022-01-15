template <typename T>
void SqList<T>::reverse()	//逆值
{	
int i, temp;

	for (i = 0; i < length / 2; i++)
	{
		temp = data[i];
		data[i] = data[length - i - 1];
		data[length - i - 1] = temp;
	} 

}
