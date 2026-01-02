class Logic
{
    void findLargestDigit(int num)
     {
    int maxDigit = 0;
    while (num > 0)
     {
        int digit = num % 10;
        if (digit > maxDigit) 
        {
            maxDigit = digit;
        }
        num /= 10;
    }
    System.out.println("Largest digit is: " + maxDigit);
}
}
class Question4
{
    public static void main(String a[])
    {
        Logic obj = new Logic();
        obj.findLargestDigit(83429);
    }
}