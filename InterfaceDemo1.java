class InterfaceDemo1
{
    public static void main(String args[])
    {
      PPA pobj=new PPA();
      System.out.println("value of PI is: "+Circle.PI);
      Circle.PI=6.15f;
      float fRet=0.0f;
      fRet=pobj.Area(10.7f);
      System.out.println("Area of circle is: "+fRet);
      fRet=pobj.Circumfarance(10.7f);
      System.out.println("Circumfarance is: "+fRet);

    }
}
interface Circle
{
    float PI=3.14f;

    public float Area(float Radius);
    public float Circumfarance(float Radius);

}
class PPA implements Circle
{
    public float Area(float Radius)
    {
        return PI*Radius*Radius;
    }
    public float Circumfarance(float Radius)
    {
        return 2*PI*Radius;
    }

}

