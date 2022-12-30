int main()
{
    int n,b,f,a,sum;
    
    scanf_s("%d", &n);

    for (int i = 1; i < n; i++) {
        a = i;
        sum = 0;
        while (a > 0) {

            b = a % 10;
            a /= 10;
            f = 1;
            for (int j = 1; j <= b; j++) {
                
                f *= j;
            
            }
            
            sum += f;
        }
        if (sum == i) { printf("%d\n",i);}
    }
    
    return 0;
}