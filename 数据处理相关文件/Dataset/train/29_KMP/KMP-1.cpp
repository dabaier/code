int  KMPIndex(SqString s,SqString t){ 
    int next[MaxSize],i=0,j=0,v;
    GetNext(t,next);
    while(i<s.length && j<t.length){
        if(j==-1 || s.data[i]==t.data[j]){
            i++;
            j++;
        }else
            j=next[j]; 
    }
    if(j>=t.length)
        v=i-t.length;      
    else
        v=-1;    
    return v;
}
