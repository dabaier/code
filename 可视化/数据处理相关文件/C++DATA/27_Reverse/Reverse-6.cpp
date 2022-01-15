template <typename T>
void SqList<T>::reverse()	//逆值
{	
int i = 0;
    int m = length - 1;
    for(;i<=((length-1)/2);++i)
        {
            int tmp = data[i];
            data[i] = data[m];
            data[m] = tmp;
            m--;
        }
}
