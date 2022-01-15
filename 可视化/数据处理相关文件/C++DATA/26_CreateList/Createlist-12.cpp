template <typename T>
void SqList<T>::CreateList()	//建立顺序表,当输入为-1时，顺序表输入结束
{	
int i,x;
for(i=0;;i++)
{
  cin>>x;
  if(x==-1)
    break;
  else
    data[i]=x;
}
length=i;

}
