class Logic 
{
    void checkPrime(int num) 
    {
        if (num <= 1)
        {
            System.out.println(num + " is not prime");
        }
         else 
        {
            boolean isPrime = true;

            for (int i = 2; i <= Math.sqrt(num); i++) 
            {
                if (num % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime)
            {
                System.out.println(num + " is prime");
            } 
            else 
            {
                System.out.println(num + " is not prime");
            }
        }
    }
}

class Question1
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }
}