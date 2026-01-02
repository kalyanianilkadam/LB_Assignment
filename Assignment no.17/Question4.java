class Logic
 {
    void findMin(int a, int b, int c)
     {
        int min = Math.min(a, Math.min(b, c));
        System.out.println("Minimum: " + min);
    }
}
class Question4
{
    public static void main(String a[])
    {
        Logic obj = new Logic();
        obj.findMin(3, 7, 2);
    }
}