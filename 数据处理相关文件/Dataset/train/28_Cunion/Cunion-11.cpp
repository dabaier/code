template<typename T>
void SqList<T>::Union(SqList<T> &target1, SqList<T> &target2, SqList<T> &result)
{
	for (int i = 0; i < target1.length; i++)
	{
		if (target2.IsIn(target1.data[i]) == false)
		{
			result.InsertElem(target1.data[i]);
		}
	}
	
	for (int i = 0; i < target2.length; i++)
	{
		result.InsertElem(target2.data[i]);
	}
}
