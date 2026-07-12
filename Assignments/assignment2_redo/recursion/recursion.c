 int power(int base, int exponent)
 {
     int result =0;

    if (exponent == 0)
    {
        return 1;
    }

    result= base * power(base, exponent - 1);

    return result;
 }

 
    int sumDigits(int n)
{
    int sum =0;

    if (n==0)
    {
        return 0;
    }
    sum=(n % 10) + sumDigits(n / 10);
    return sum;

  }