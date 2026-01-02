class Logic 
{
    void calculateSum(int n)
    {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt = 0; iCnt <= n; iCnt++)
        {
            iSum += iCnt;
        }
        System.out.println("Sum of first"+ n +"natural numbers is:"+iSum);
    }
}
class Question1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.calculateSum(10);
    }
}