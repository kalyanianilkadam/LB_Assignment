class Logic
 {
    void findMax(int a, int b)
     {
        int max = (a > b) ? a : b;
        System.out.println("Maximum: " + max);
    }
}
class Question3
{
    public static void main(String a[])
    {
        Logic obj = new Logic();
        obj.findMax(20, 15);
    }
}