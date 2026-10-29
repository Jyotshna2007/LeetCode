bool isPalindrome(int x) {
 int s=x;
 long long sum=0;
 while(s>0){
    int rem=s%10;
    sum=sum*10+rem;
    s=s/10;
 }
 if(sum==x){
    return true;
 }
 else{
    return false;
 }
}