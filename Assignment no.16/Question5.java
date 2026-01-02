class Logic
 {
    void countDigits(int num)
     {
        int count = 0;

        if (num == 0) 
        {
            System.out.println(1);
            return;
        }

        if (num < 0)
        {
             num = -num; 
        }
        while (num != 0)
         {
            num /= 10;
            count++;
        }
        System.out.println(count);
    }
}

class Question5
{
    public static void main(String args[])
     {
        Logic obj = new Logic();
        obj.countDigits(7865);
    }
}