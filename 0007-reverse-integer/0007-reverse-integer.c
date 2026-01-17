int reverse(int x){
int s=x;
long long sum=0;
while(s!=0 ){
    int r=s%10;
   if(sum*10+r>INT_MAX || sum*10+r<INT_MIN){
    return 0;
   }
   sum=sum*10+r;
    s=s/10;
}

return sum;
}