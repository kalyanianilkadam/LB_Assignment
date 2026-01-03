class Logic 
{
    void productOfDigits(int num)
     {
        int product = 1;

        while (num != 0)
         {
            product *= num % 10; 
            num /= 10;          
        }
        System.out.println("Product of digits: " + product);
    }
}

class Question1
 {
    public static void main(String args[])
     {
        Logic obj = new Logic();
        obj.productOfDigits(234); 
    }
}