int Sum(int n)
{
    int sum;
    for (sum=0; n > 0; sum+=n%10,n/=10);
        return sum;
}

int main()
{
  int n;
  scanf("%d",&n);
  printf(" %d ",Sum(n));
  return 0;
}
