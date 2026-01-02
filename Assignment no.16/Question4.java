class Logic
 {
    void reverseNumber(int num)
     {
        int reversed = 0;

        while (num != 0)
         {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }
        System.out.println("Reversed Number: " + reversed);
    }
}

class Question4
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.reverseNumber(1234);
    }
}