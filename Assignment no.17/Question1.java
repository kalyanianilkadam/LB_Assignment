class Logic 
{
    void sumOfDigits(int num) 
    {
        int sum = 0;

        while (num != 0)
         {
            sum += num % 10;
            num /= 10;
        }
        System.out.println("Sum of digits: " + sum);
    }
}
class Question1
{
    public static void main(String a[])
    {
        Logic obj = new Logic();
        obj.sumOfDigits(1234);
    }
}