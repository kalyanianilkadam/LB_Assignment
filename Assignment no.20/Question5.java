class Logic
{
    void findSmallestDigit(int num)
     {
    int minDigit = 0;
    while (num > 0)
     {
        int digit = num % 10;
        if (digit < minDigit) 
        {
            minDigit = digit;
        }
        num /= 10;
    }
    System.out.println("smallest digit is: " + minDigit);
}
}
class Question5
{
    public static void main(String a[])
    {
        Logic obj = new Logic();
        obj.findSmallestDigit(45872);
}
}