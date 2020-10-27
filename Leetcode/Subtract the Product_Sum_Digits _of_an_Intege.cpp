int subtractProductAndSum(int n)
{
    int product = 1;
    int sum = 0;

    while (n != 0)
    {
        int a = n % 10;
        n = n / 10;
        product *= a;
        sum += a;
    }
    return product - sum;
}