
float addition(float add1, float add2)
{
    return add1 + add2;
}
float subtraction(float sub1, float sub2 )
{
    return sub1 - sub2;
}
float multiplication(float mul1, float mul2 )
{
    return mul1 * mul2;
}
float division(float div1, float div2 )
{
    return div1 / div2;

}
int modulo(int mod1, int mod2 )
{
    return mod1 % mod2;

}
int power(float pow1, float pow2 )
{
    return pow(pow1, pow2);
}
int root(int r, int n)
{
    return pow(r, 1./n);
}
float logarithm(float log1, float log2 )
{
    return log(log2)/log(log1);
}
int binto(char *binto1, int binto2)
{
        return strtol(binto1, NULL, 2);

}