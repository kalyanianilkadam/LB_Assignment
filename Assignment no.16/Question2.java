class Logic 
{
    void calculateEvenOdd(int num)
    {
       if(num % 2 == 0)
       {
        System.out.println("Even Number");
       }
       else
       {
        System.out.println("odd Number");
       }
    }
}
class Question2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.calculateEvenOdd(7);
    }
}