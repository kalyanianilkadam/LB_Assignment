class Logic
{
    void findFactorial(int num)
    {
        int factorial = 1;
        for (int i = 1; i <= num; i++)
        {
            factorial *= i;
        }
        System.out.println("factorial is:"+factorial);
    }
}

class Question3
{
    public static void Main(String[] args)
    {
        Logic obj = new Logic();
        obj.findFactorial(5);
    }
}