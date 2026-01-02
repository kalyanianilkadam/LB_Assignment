class Logic 
{
    void checkPalindrome(int num) 
    {
        int reversed = 0;

        int original = num;

        while (num != 0) 
        {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }
        if (original == reversed)
        {
            System.out.println("Number is a palindrome");
        } 
        else 
        {
            System.out.println("Number is not a palindrome");
        }
    }
}
class Question2
{
    public static void main(String a[])
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    }
}