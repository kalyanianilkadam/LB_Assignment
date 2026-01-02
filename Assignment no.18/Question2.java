class Logic 
{
    void printEvenNumbers(int n)
     {
        System.out.println("Even numbers up to " + n + ":");

        for (int i = 2; i <= n; i += 2) 
        {
            System.out.print(i + " ");
        }
    }
}

class Question2
 {
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.printEvenNumbers(20);
    }
}