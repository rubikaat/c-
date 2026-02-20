int subtractProductAndSum(int n) {
    int result;
    int sum=0;
    int pro=1;
    while(n!=0){
        int digit=n%10;
        sum=sum+digit;
        pro=pro*digit;
        n=n/10;
    }
    result=pro-sum;
    return result;
}