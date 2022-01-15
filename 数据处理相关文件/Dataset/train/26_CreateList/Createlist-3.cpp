template <typename T>
void SqList<T>::CreateList()	//建立顺序表,当输入为-1时，顺序表输入结束
{	

int i;
int a[MaxSize];
for(i=0;i<MaxSize;i++)
{
   cin>>a[i];
   if(a[i]==-1) {break;}
   else {data[i]=a[i];length=i+1;}
}
}
