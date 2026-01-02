class Logic
 {
    void printDigits(int num) 
    {
        while (num > 0)
         {
            System.out.println(num % 10);
            num /= 10;
        }
    }
}

class Question4
{
    public static void main(String args[])
     {
        Logic obj = new Logic();
        obj.printDigits(9876);
    }
}