template <typename T>
void SqList<T>::CreateList()	//建立顺序表,当输入为-1时，顺序表输入结束
{	
int i = 0;
	do
	{
		cin >> data[i];
		i++;

	} while (data[i - 1] != -1);
	length = length + i - 1;
}
