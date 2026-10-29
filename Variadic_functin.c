int  sum (int count,...) {
    int sum=0;
    int i;
    va_list arr;
    va_start(arr,count);
    for(i=0;i<count;i++)
        sum+=va_arg(arr,int);
    va_end(arr);
    return sum;
}

int min(int count,...) {
    int i,s,min;
    va_list arr;
    va_start(arr,count);
    min=va_arg(arr,int);
    for(i=1;i<count;i++){
        s=va_arg(arr,int);
        if(min>s)
            min=s;   
    }
    va_end(arr);
    return min;   
}

int max(int count,...) {
    int i,s;
    int max;
    va_list arr;
    va_start(arr,count);
    max=va_arg(arr,int);
    for(i=1;i<count;i++){
        s=va_arg(arr,int);
        if(max<s)
            max=s;   
    }
    va_end(arr);
    return max;
}
