template <typename T>
void SqList<T>::CreateList()	//建立顺序表,当输入为-1时，顺序表输入结束
{	
int i;
cin>>i;
int j=0;
while(i!=-1)
{ 
data[j]=i;
cin>>i;
j++;
}
length=j;
    
}
