class Logic
{
    void printReverse(int n) 
{
    for (int i = n; i >= 1; i--) 
    {
        System.out.print(i + " ");
    }
    System.out.println();
}
}
class Question2
{
    public static void main(String a[])
    {
        Logic obj = new Logic();
        obj.printReverse(10);
    }
}