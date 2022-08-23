int solve(int n, int * arr){
    if(arr[n]!=-1)
        return arr[n];
    int x = solve(n-1,arr);
    int y = INT_MAX, z = INT_MAX;
    if(n%2==0)
        y = solve(n/2,arr);
    if(n%3==0)
        z = solve(n/3,arr);
    arr[n]=1+min(x,min(y,z));
    return arr[n];
}
int countStepsToOne(int n)
{
	//Write your code here
    int * arr = new int[n+1];
    arr[0]=0;
    arr[1]=0;
    arr[2]=1;
    arr[3]=1;
    for(int i=4; i<=n;i++)
        arr[i]=-1;
    return solve(n,arr);
    
}