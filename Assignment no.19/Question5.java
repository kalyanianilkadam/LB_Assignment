class Logic
 {
    int calculatePower(int base, int exp) 
    {
        int result = 1;
        for (int i = 0; i < exp; i++)
         {
            result *= base;
        }
        return result;
    }
}

class Question5
 {
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        int power = obj.calculatePower(2, 5);
        System.out.println("Result: " + power);
    }
}