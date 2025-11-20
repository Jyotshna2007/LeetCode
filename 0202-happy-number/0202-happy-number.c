bool isHappy(int n) {
    int s=n;
    int sum=0;
    while(s>0){
        int r=s%10;
        sum=r*r+sum;
        s=s/10;
        if(s==0){
            s=sum;
            sum=0;
            if(s>=1 && s<=9){
                break;
            }
}
    }
   if(s==1 || s==7){
    return 1;
   }
   else{
    return 0;
   }
}